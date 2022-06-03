void dfs(vector<vector<int>> &A,int i,int j){
        if( i<0 || j<0 || i>=A.size() || j>=A[0].size() || A[i][j]==0)
            return ;
        
        A[i][j] = 0;
        
    dfs(A,i-1,j);
    dfs(A,i+1,j);
    dfs(A,i,j-1);
    dfs(A,i,j+1);
    }

class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n= grid.size();
        int m= grid[0].size();
        cout<<n<<" "<<m<<",";
        // if(n<3 or m<3)
        //     return 0;
        for(int i=0;i<grid[0].size();i++)
        {
            
                if(grid[0][i]==1)
                {
                    dfs(grid,0,i);
                }
                
                if(grid[n-1][i]==1)
                {
                    dfs(grid,n-1,i);
                }
            
            
        }
        for(int i=0;i<grid.size();i++)
        {
             if(grid[i][m-1]==1)
                {
                    dfs(grid,i,m-1);
                }
                if(grid[i][0]==1)
                {
                    dfs(grid,i,0);
                }
        }
        int count=0;
        for(auto i: grid)
            for(auto j:i)
                if(j==1)
                    count++;
        
        return count;
                
    }
};