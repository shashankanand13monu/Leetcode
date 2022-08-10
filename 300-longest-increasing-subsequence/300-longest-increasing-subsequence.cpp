// int help(int prev,int curr,vector<int>&nums,vector<vector<int>>&dp)
// {
//     if(curr==nums.size())
//         return 0;
    
//     if(prev!=-1 and dp[prev][curr]!=0)
//     {
//         return dp[prev][curr];
//     }
//     int op1=0;
//     if(prev== -1 or nums[prev]<nums[curr])
//     {
//         op1= 1+ help(curr,curr+1,nums,dp);
//     }
//     int op2= 1+ help(prev,curr+1,nums,dp);
    
//     if(prev!=-1)
//         dp[prev][curr]=max(op1,op2);
    
//     return max(op1,op2);
    
// }

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
//         vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        
//         return help(-1,0,nums,dp);
        
        int n = nums.size();
        int dp[n];
        int final_max = 0;
        for(int i=0; i<n; i++) {
            int m = 0;
            for(int j=0; j<i; j++) {
                if(nums[i]>nums[j]) {
                    if(dp[j]>m)
                        m = dp[j];
                }
            }
            dp[i] = m+1;
            
            if(dp[i]>final_max)
                final_max = dp[i];
        }
        return final_max;
    }
};