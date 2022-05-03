class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        int end=-1;
        int min=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<min)
                end=i;
            else
                min=nums[i];
        }
        
        int st=0;
        int max=nums[nums.size()-1];
        
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]>max)
                st=i;
            else
                max=nums[i];
        }
        
        return end-st+1;
        
    }
};