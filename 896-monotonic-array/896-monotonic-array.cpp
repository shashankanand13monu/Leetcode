class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        int count=0,flag=0;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]<nums[i])
                count++;
            else if(nums[i-1]>nums[i])
                flag++;
            else if(nums[i-1]==nums[i])
                {count++;
            flag++;}
        }
        
        if(count==nums.size()-1 or flag==nums.size()-1)
            return true;
        
        return false;
        
    }
};