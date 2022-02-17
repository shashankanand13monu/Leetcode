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

void pro(TreeNode* root,int &left,int &max,int curr)
{
    if(!root)
        return;
    
    if(curr>max)
    {
        left=root->val;
        max=curr;
    }
        
    
    // pro(root->left,left,max,curr+1);
    pro(root->left,left,max,curr+1);

    pro(root->right,left,max,curr+1);

}

class Solution {
public:
    int findBottomLeftValue(TreeNode* root) 
    {
        int max=0;
        int left=root->val;
        // curr=0;
        pro(root,left,max,0);
        return left;
    }
};