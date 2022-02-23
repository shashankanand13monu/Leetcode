class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
           int count=0;
        
        if(k<=1)
            return 0;
        
       int l=0,r=0;
        int p=1;
        while(r<nums.size())
        {
            p=p*nums[r];
            
            while(p>=k)
            {
                p=p/nums[l];
                l++;
                
            }
            
            count= count + r-l+1;
            r++;
            
        }
        
        return count;
        
    }
};