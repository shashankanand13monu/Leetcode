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

bool twin(TreeNode* T, TreeNode* S)
{
    if(T==NULL and S==NULL)
        return true;
    
    if(T==NULL or S==NULL)
        return false;
    
    return (T->val==S->val and twin(T->left,S->left) and twin(T->right,S->right));
}

class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) 
    {
        if(subRoot==NULL)
            return true;
        
        if(root==NULL)
            return false;
        
        if(twin(root,subRoot))
            return true;
        
        return isSubtree(root->left,subRoot) or isSubtree(root->right,subRoot);
        
            
    }
};