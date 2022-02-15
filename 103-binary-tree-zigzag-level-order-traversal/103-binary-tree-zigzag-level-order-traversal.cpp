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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>>ans;
        vector<int>temp;
        queue<TreeNode*>q;
        if(!root)
            return ans;
        q.push(root);
        int lvl=1;
        while(!q.empty())
        {
            int n= q.size();
            temp.resize(n);
            for(int i=0;i<n;i++)
            {
                TreeNode* node= q.front();
                q.pop();
                if(lvl%2==0)
                    temp[n-i-1]= node->val;
                else
                     temp[i]= node->val;   
                
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
         
               
            }
             lvl++;
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};