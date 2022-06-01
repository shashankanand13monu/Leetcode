class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int x=0;
        vector<int>ans;
        
        for(auto i: nums)
        {
            x=x+i;
            ans.push_back(x);
        }
        
        return ans;
    }
};