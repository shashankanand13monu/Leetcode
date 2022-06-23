class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int r=0;
        for(int i=0;i<=r;i++)
        {
            if(nums[i]+i>r) r=nums[i]+i;
            if(r>=size(nums)-1) return true;
            
        }
        return false;
        
    }
};