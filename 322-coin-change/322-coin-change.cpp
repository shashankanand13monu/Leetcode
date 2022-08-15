class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int>dp(amount+1,INT_MAX);
        for(auto i:coins){
            if(i<=amount)
                dp[i]=1;
        }
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            for(auto coin:coins){
                if(i-coin<0||dp[i-coin]==INT_MAX){
                    continue;
                }
                dp[i]=min(dp[i],dp[i-coin]+1);
            }
        }
        return dp[amount]==INT_MAX?-1:dp[amount];
    }
};