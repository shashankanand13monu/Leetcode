void dfs(vector<vector<int>>&ans,vector<int> &t,int i,vector<vector<int>> &g)
{ 
    t.push_back(i);
    if(i==g.size()-1)
        ans.push_back(t);
    
    for(auto x: g[i])
    {
       
        dfs(ans,t,x,g);
       
    }
    t.pop_back();
}

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph)
    {
        vector<vector<int>>ans;
        vector<int>temp;
        dfs(ans,temp,0,graph);
        return ans;
        
    }
};