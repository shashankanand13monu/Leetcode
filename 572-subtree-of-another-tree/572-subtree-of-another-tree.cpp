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
bool areIdentical(TreeNode * root1, TreeNode *root2)
{
    /* base cases */
    if (root1 == NULL && root2 == NULL)
        return true;
 
    if (root1 == NULL || root2 == NULL)
        return false;
 
    /* Check if the data of both roots is same and data of left and right
       subtrees are also same */
    return (root1->val == root2->val   &&
            areIdentical(root1->left, root2->left) &&
            areIdentical(root1->right, root2->right) );
}

bool subtree(TreeNode * T, TreeNode *S)
{
    if(T==NULL)
        return false;
    if(S==NULL)
        return true;
    
    
    if(areIdentical(T,S))
        return true;
    
    return subtree(T->left,S) || subtree(T->right,S);
}
class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) 
    {
           // if(subtree(root,subRoot))
           //     areIdentical(root,subRoot);
               
              return subtree(root,subRoot);
    }
};