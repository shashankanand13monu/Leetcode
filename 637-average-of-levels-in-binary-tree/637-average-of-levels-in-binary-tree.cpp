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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q; 
        vector<double>xx;
        if(!root)
            return {};
        
        q.push(root);
         vector<vector<int>> ans;
        while(!q.empty())
        {   
            vector<int>temp;
            
            double size= q.size();
            double sz=size;
            double t=0;
         while(size--)
         {
             TreeNode* front= q.front();
             q.pop();
             temp.push_back(front->val);
             
            if(front->left)
            q.push(front->left);
             if(front->right)
            q.push(front->right);
             
             t=t+front->val;

         }
        xx.push_back(t/sz);
         ans.push_back(temp);
            // temp.clear();
         
        }
        
       
        
//         for(auto i: ans)
//         {   
//             double sz= i.size();
//             double sum=0;
            
//             for(int j=0;j<sz;j++)
//             {
//                 sum=sum + i[j]/sz;
//             }
            
//             xx.push_back(sum);
//         }
        
        return xx;
    }
};