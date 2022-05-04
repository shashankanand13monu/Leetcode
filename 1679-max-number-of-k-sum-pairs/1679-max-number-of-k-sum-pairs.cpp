class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
           unordered_map<int,int>map;
        // sort(nums.begin(),nums.end());
        int count=0;
        for(auto i: nums)
        {
            if(map[k-i])
            {
                count++;
                map[k-i]--;
            }
            else
                map[i]++;
        }
        
        
      
        
        return count;
    }
};