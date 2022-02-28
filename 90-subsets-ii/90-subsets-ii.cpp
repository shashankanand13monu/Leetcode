void dfs(vector<vector<int>>&ans,vector<int>&a,vector<int> n,int i )
{
    if(i==n.size())
    {   
        vector<int>x=a;
        sort(x.begin(),x.end());
        ans.push_back(x);
        return;
    }
    
    a.push_back(n[i]);
    dfs(ans,a,n,i+1);
    a.pop_back();
    dfs(ans,a,n,i+1);
    
}

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>>ans;
            vector<int>a;
        dfs(ans,a,nums,0);
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};