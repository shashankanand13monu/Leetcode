// int help(string t1, string t2,int m,int n,vector<vector<int>>&dp)
// {
//     if(m==0 or n==0)
//         return 0;
    
//     if(dp[m][n]!=-1)
//         return dp[m][n];
    
//     if(t1[m-1]==t2[n-1])
//     {
//         dp[m][n]=1 + help(t1,t2,m-1,n-1,dp);
//         return dp[m][n];
//     }
        
//     else
//         return dp[m][n]= max(help(t1,t2,m-1,n,dp),help(t1,t2,m,n-1,dp));
// }

class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {
        int m= t1.size();
        int n= t2.size();
        
        vector<vector<int>>dp(m+1, vector<int> (n+1, 0));
//         for(int i=0;i<n;i++)
//             dp[0][i]=0;
//         for(int i=0;i<m;i++)
//             dp[i][0]=0;
        
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(t1[i-1]==t2[j-1])
                    dp[i][j]= 1+ dp[i-1][j-1];
                else
                    dp[i][j]= max(dp[i][j-1],dp[i-1][j]);
            }
        }
        
        return dp[m][n];
        
        // return help(t1,t2,t1.size(),t2.size(),dp);
    }
};