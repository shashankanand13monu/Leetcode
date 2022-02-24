class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
         int sum=0;
        int l=0;
        int r=0;
        int ans=INT_MAX;
        
        while(r<nums.size())
        {
            sum= sum + nums[r];
            
            if(sum<target)
                r++;
            else if(sum>=target)
            {
                while(sum>=target)
                {
                    ans= min(ans,r-l+1);
                    sum=sum-nums[l];
                    l++;
                }
                r++;
                
                
            }
        }
        if(ans==INT_MAX)
            return 0;
        
        return ans;
        
    }
};