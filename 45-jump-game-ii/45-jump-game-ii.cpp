class Solution {
public:
    int jump(vector<int>& nums) 
    {   
        if(nums.size()==1)
            return 0;
        int r=0;
        int mx=0;
        int temp=0;
        int ans=0;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]+i>temp)
                temp=nums[i]+i;
            
            
            
            // mx=max(mx,i+nums[i]);
            
            if(i==r)
            {
                ans++;
                // max=temp;
                r=temp;
            }
        }
        
        return ans;
    }
};