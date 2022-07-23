/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void parent(unordered_map<TreeNode*,TreeNode*>&map,TreeNode* p)
{
     if(!p)
         return;
    
            if(p->left)
            map[p->left]=p;
            
            if(p->right)
                map[p->right]=p;
    
    parent(map,p->left);
    parent(map,p->right);
        
}

class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        TreeNode* p=root;
        if(!root)
            return {};
        
        unordered_map<TreeNode*,TreeNode*>map;
        unordered_map<TreeNode*,int>vis;
         vector<int> ans;
        parent(map,root);
        
        queue<TreeNode*>q;
        q.push(target);
        vis[target]++;
        while(!q.empty())
        {
            int sz= q.size();
            for(int i=0;i<sz;i++)
            {   
                TreeNode* curr= q.front();
                q.pop();
                if(k==0)
                    ans.push_back(curr->val);
                
                if(curr->right and vis[curr->right]==0)
                {
                    q.push(curr->right);
                    vis[curr->right]++;
                }
                    
                if(curr->left and vis[curr->left]==0)
                {
                    q.push(curr->left);
                    vis[curr->left]++;
                }
                    
                if(map[curr] and vis[map[curr]]==0)
                {
                    q.push(map[curr]);
                    vis[map[curr]]++;
                }
                   
            }
            k--;
            if(k<0)
                break;
        }
        return ans;
       
        
    }
};