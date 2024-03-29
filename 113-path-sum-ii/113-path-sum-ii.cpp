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

void pre(TreeNode* root,int sum, vector<int> a, vector<vector<int>> &ans)
{
  
    if(!root)
        return;
      a.push_back(root->val);
    if(!root->left and !root->right and sum-root->val==0)
    {
        ans.push_back(a);
        
    }
    
  
    pre(root->left,sum-root->val,a,ans); 
    pre(root->right,sum-root->val,a,ans); 

    
    
}

class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
         vector<int>a;
         vector<vector<int>>ans;
        
        pre(root,targetSum,a,ans); 
        
        return ans;
        
        
    }
};