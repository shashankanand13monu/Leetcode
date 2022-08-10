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

int h(TreeNode* root)
{
    if(!root)
        return 0;
    
     if (root->left && root->right)  
        return min(h(root->left), h(root->right))+1;
    return max(h(root->left), h(root->right))+1;
}

class Solution {
public:
    int minDepth(TreeNode* root) {
        return h(root);
    }
};