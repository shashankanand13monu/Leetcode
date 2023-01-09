
void pre(TreeNode* root,vector<int>&a)
{
    if(!root)
        return;
    a.push_back(root->val);
    pre(root->left,a);
    pre(root->right,a);
}

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector<int>a;
        
        pre(root,a);
        
        return a;
        
    }
};