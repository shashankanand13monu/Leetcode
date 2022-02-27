void dfs(vector<vector<int>>&ans,vector<int>&a,vector<int> n,int i )
{
    if(i==n.size())
    {
        ans.push_back(a);
        return;
    }
    
    a.push_back(n[i]);
    dfs(ans,a,n,i+1);
    a.pop_back();
    dfs(ans,a,n,i+1);
    
}

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
           vector<vector<int>>ans;
            vector<int>a;
        dfs(ans,a,nums,0);
        return ans;
        
    }
};