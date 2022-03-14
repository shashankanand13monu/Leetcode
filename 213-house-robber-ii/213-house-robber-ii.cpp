int helper(int curr,vector<int>& nums,vector<int>& t)
{
    if(curr>=nums.size())
        return 0;
    
    //Memorization
    if(t[curr]!=-1)
        return t[curr];
    
    int x= nums[curr] + helper(curr+2,nums,t);
    int y= helper(curr+1,nums,t);
    
    return t[curr]=max(x,y);
    
}

class Solution {
public:
    int rob(vector<int>& nums) {
        int n= nums.size();
        
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[0],nums[1]);
        
        vector<int>t(n,-1);
        vector<int>t2(n,-1);

        vector<int>v(nums.begin(),nums.end()-1);
        vector<int>v2(nums.begin()+1,nums.end());
        
        return max(helper(0,v,t),helper(0,v2,t2));
    }
};