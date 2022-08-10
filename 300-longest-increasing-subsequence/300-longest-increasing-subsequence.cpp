class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n= nums.size();
        int dp[n];
        int max_far=0;
        
        for(int i=0;i<n;i++)
        {   
            int sz=0;
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i] and dp[j]>sz)
                {
                    sz=dp[j];
                }
                
            }
            dp[i]=sz+1;
            
            if(dp[i]>max_far)
                max_far=dp[i];
        }
        
        return max_far;
    }
};