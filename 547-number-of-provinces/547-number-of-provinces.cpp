void dfs(vector<vector<int>>& a , int i)
{
    a[i][i]==0;
    
    for(int j=0;j<a.size();j++)
    {
        if(a[i][j]==1)
        {
            a[i][j]=0;
            if(a[j][j]==1)
                dfs(a,j);
        }
    }
}

class Solution {
public:
    int findCircleNum(vector<vector<int>>& a) 
    {
          int ans=0;
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i][i]==1)
            {
                ans++;
                dfs(a,i);
                
            }
        }
        
        return ans;
    }
};