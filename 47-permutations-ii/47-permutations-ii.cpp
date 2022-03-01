void dfs(vector<vector<int>> &ans ,vector<int>&t,map<int,int>&m,vector<int> &nums)
{
    if(t.size()==nums.size())
    {   
        
        ans.push_back(t);
        return;
    }
    
    for(int i=0;i<nums.size();i++)
    {
        if(!m[i])
        {   cout<<"h";
            m[i]=1;
            t.push_back(nums[i]);
            dfs(ans,t,m,nums);
            m[i]=0;
            t.pop_back();
        }
    }
    
}

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int>t;
        map<int,int>m;
        
        dfs(ans,t,m,nums);
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
        
    }
};