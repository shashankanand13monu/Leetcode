// int helper(int curr,vector<int>& nums,vector<int>& t)
// {
//     if(curr>=nums.size())
//         return 0;
    
//     //Memorization
//     if(t[curr]!=-1)
//         return t[curr];
    
//     int x= nums[curr] + helper(curr+2,nums,t);
//     int y= helper(curr+1,nums,t);
    
//     return t[curr]=max(x,y);
    
// }

class Solution {
public:
    int rob(vector<int>& nums) {
        
       int n = nums.size(), pre = 0, cur = 0;
        for (int i = 0; i < n; i++) {
            int temp = max(pre + nums[i], cur);
            pre = cur;
            cur = temp;
        }
        return cur;
        // int n= nums.size();
        // vector<int>t(n,-1);
        // return helper(0,nums,t);
    }
};