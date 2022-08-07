class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int x=0;
        int n= nums.size();
        x= (n*(n+1))/2;
        
         int sum=0;
        
        for(auto i: nums)
        {
            sum=sum+i;
        }
        // cout<<x-sum<<" "<<sum-x;
        
        return x-sum;
    }
};