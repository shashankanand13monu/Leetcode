class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n= nums.size();
        map<int,int>map;
        
        map[0]++;
        int sum=0,ans=0;
        
        for(auto i: nums)
        {
            sum=sum+i;
            
            if(map[sum-k])
                ans=ans+map[sum-k];
                
            
            map[sum]++;
        }
        return ans;
        
    }
};