class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int ans=0;
        int sum=0;
        int max_sum=INT_MIN;
        for(auto i: nums)
        {
            sum=sum+i;
            
            if(sum>max_sum)
                max_sum=sum;
            
            if(sum<0)
                sum=0;
        }
        
        return max_sum;
        
    }
};