
void DFS(vector<vector<char>>& a,int i,int j)
{
   
    
    // if(i<0 or i>=a.size() or j<0 or j>=a[0].size() or a[i][j]!='O')
    //     return;
     if(i>=0 and i<a.size() and j>=0 and j<a[0].size() and a[i][j]=='O')
     {
           a[i][j]='#';
    
    DFS(a,i,j-1);
    DFS(a,i-1,j);
    DFS(a,i+1,j);
    DFS(a,i,j+1);
    
     }

    
  
    
    
   
}

class Solution {
public:
    void solve(vector<vector<char>>& a) 
    {
        int m= a.size();
        int n= a[0].size();
        
        for(int i=0;i<n;i++)
        {
            if(a[0][i]=='O')
                DFS(a,0,i);
            if(a[m-1][i]=='O')
                DFS(a,m-1,i);
         
        }
        
        for(int i=0;i<m;i++)
        {
            if(a[i][0]=='O')
                DFS(a,i,0);
            if(a[i][n-1]=='O')
                DFS(a,i,n-1);
        }
          
       
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]=='#')
                   a[i][j]='O';
                else if(a[i][j]=='O')
                    a[i][j]='X';
                
            }
        }
        // return;
        
    }
};