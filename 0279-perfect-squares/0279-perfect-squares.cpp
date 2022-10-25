
int rec(int n,vector<int>&dp)
{
    if(n<0)
        return INT_MAX;
    if(n==0)
        return 0;
    
    if(dp[n]!=-1)
        return dp[n];
    
    int minx= n;
    
    for(int i=1;i*i<=n;i++)
    {
        minx= min(rec(n-i*i,dp),minx);
    }
    
    dp[n]=minx+1;
    
    return minx+1;
}

class Solution {
public:
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        return rec(n,dp);
    }
};