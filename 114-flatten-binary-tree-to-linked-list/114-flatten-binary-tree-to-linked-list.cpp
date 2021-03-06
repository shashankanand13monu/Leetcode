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

void flat(TreeNode*root , TreeNode* &prev)
{
    if(!root)
            return ;
        
        flat(root->right,prev);
        flat(root->left,prev);
        root->right=prev;
        root->left=NULL;
        prev=root;
}
class Solution {
public:
    void flatten(TreeNode* root) 
    {
        TreeNode* prev= NULL;
        flat(root,prev);
        
        /*TreeNode* curr= root;
        TreeNode* prev;
        
        while(curr)
        {
            if(curr->left)
            {
                prev= curr->left;
                
                while(prev->right)
                    prev= prev->right;
                
                prev->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;
                
            }
            
            curr=curr->right;
            
        }
        */
        
    }
};