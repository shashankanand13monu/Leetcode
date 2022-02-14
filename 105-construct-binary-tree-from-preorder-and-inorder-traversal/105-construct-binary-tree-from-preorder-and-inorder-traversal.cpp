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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        int rootidx=0;
        unordered_map<int,int>umap;
        
        int idx=0;
        
        for(int i=0;i<inorder.size();i++)
        {
            umap[inorder[i]]=i;
        }
        int x= inorder.size()-1;
        return helper(preorder,inorder,rootidx,0,x,umap);   
    }
    
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int &rootidx,int l,int r,unordered_map<int,int> &umap)
{
    if(l>r)
        return NULL;
    
    int pivot=umap[preorder[rootidx]];
    rootidx++;
    
    auto root = new TreeNode(inorder[pivot]);
    root->left= helper(preorder,inorder,rootidx,l,pivot-1,umap);
    root->right=helper(preorder,inorder,rootidx,pivot+1,r,umap);
    
    
    return root;
}
    
};