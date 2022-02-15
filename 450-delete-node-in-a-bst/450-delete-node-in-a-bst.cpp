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

int helper(TreeNode* root)
{
    int min;
    
    while(root)
    {
        min= root->val;
      
        root=root->left;
    }
    return min;
    
}

class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) 
    {
         if(!root)
             return nullptr;
        
        if(root->val<key)
            root->right= deleteNode(root->right,key);
        else if(root->val>key)
            root->left= deleteNode(root->left,key);
        
        else
        {
            if(!root->left)
                return root->right;
            else if(!root->right)
                return root->left;
            else
            {
                int min= helper(root->right);
                root->val=min;
                root->right = deleteNode(root->right,min);
            }
            
            
        }
return root;
    }
};