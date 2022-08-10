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
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        if(!root)
            return {};
        
        q.push(root);
         vector<vector<int>> ans;
        while(!q.empty())
        {   
            vector<int>temp;
            
            int size= q.size();
         while(size--)
         {
             TreeNode* front= q.front();
             q.pop();
             temp.push_back(front->val);
             
            if(front->left)
            q.push(front->left);
             if(front->right)
            q.push(front->right);

         }
         ans.push_back(temp);
            temp.clear();
         
        }
        return ans;
    }
};