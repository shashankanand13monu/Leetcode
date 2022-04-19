/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

void traverse(TreeNode* &root,TreeNode* &f,TreeNode* &s,TreeNode* &p)
{
    if(!root)
        return;
    
    //Morris Traversal important
    
    traverse(root->left,f,s,p);
    
    if(f==NULL and (p==NULL or p->val>=root->val))
        f=p;
    if(f!=NULL and p->val>=root->val)
        s=root;
    
    p=root;
    
    
    traverse(root->right,f,s,p);

    
}

class Solution {
public:
    void recoverTree(TreeNode* root) {
        
        TreeNode* f= nullptr;
        TreeNode* s= NULL;
        TreeNode* p= NULL;
        traverse(root,f,s,p);
        swap(f->val,s->val);
        // cout<<f->val;
    }
};