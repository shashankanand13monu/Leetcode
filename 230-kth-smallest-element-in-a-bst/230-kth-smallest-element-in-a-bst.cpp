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

// void helper(TreeNode* root, vector<int> &a)
// {   
//     if(!root)
//         return;
    
//     helper(root->left,a);
//     a.push_back(root->val);
//     helper(root->right,a);
// }

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) 
    {
        vector<int>arr;
        
       // helper(root,arr);
        stack<TreeNode *> stk;
        TreeNode *p = root;
        
        while(p or !stk.empty())
        {
            
            
            while(p)
            {
                stk.push(p);
                p=p->left;
            }
            
            p= stk.top(); 
            stk.pop();
            k--;
            if(k==0)
                return p->val;
           
            
            
            p=p->right;
            
    
            
            
        }
        
        return -1;
    }
};