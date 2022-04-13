class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
            vector<vector<int>>a(n,vector<int>(n,0));
        int x=1;
        
        int l=0;
        int col=n-1;
        int ro=n-1; 
        int bot=0;
        
        while(l<=ro&&bot<=col)
        {
            for(int i=bot;i<=ro;i++)
        {
            a[l][i]=x;
            x++;
        }
        l++;
        
        for(int i=l;i<=col;i++)
        {
            a[i][col]=x;
            x++;
        }
        col--;
        
         for(int i=col;i>=bot;i--)
        {
            // if(l<=ro)
            // {
                 a[ro][i]=x;
                   x++;
            // }
            
        }
        ro--;
       
         for(int i=ro;i>=l;i--)
        {
           
//              if(bot<=col)
//              {
                  a[i][bot]=x;
                   x++;
             // }
            
        }
           bot++; 
        
        }
        
        
        
        
        
        return a;
    }
};