class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) 
    {
           queue<pair<int,int>>q;
        int m= grid.size();
        int n= grid[0].size();
        
        int x,y,newx,newy;
        
        int dir[8][8]= {{0,1},{-1,1},{0,-1},{-1,0},{-1,-1},{1,-1},{1,0},{1,1}};
        
        if(grid[0][0]==1 or grid[m-1][n-1]==1)
            return -1;
        
        q.push(make_pair(0,0));
        int step=0;
        while(!q.empty())
        {
            
            int size= q.size();
            step++;
            while(size--)
            {
                x= q.front().first;
                y=q.front().second;
                q.pop();
                
                if(x==n-1 and y==n-1)
                    return step;
                
                for(auto i: dir)
                {
                    newx= x+ i[0];
                    newy= y+ i[1];
                    
                    if(newx>=0 and newy>=0 and newx<n and newy<n and grid[newx][newy]==0)
                    {
                        q.push(make_pair(newx,newy));
                        grid[newx][newy]=1;
                    }
                }
            }
            
        }
        
        return -1;
        
    }
};