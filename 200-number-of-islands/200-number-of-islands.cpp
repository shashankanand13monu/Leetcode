void helper(vector<vector<char>> &grid,int i,int j)
{
    if(i>=0 and j>=0 and i<grid.size() and j<grid[i].size() and grid[i][j]=='1')
    {
        grid[i][j]='0';
        
        helper(grid,i-1,j);
        helper(grid,i,j-1);
        helper(grid,i,j+1);
        helper(grid,i+1,j);

    }
}

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) 
    {
        
        int count=0;
        
      for(int  i=0 ;i<grid.size();i++)
      {
          for(int j=0;j<grid[i].size();j++)
          {
              if(grid[i][j]=='1')
              {
                  
                  helper(grid,i,j);
                  count++;
              }
          }
      }
        
        return count;
    }
};