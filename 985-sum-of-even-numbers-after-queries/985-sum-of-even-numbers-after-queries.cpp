
// void fun(int v,int ind,vector<int>& nums,vector<int>& ans)
// {
//     int sum=0;
//     for(auto i: nums)
//     {
//         if(i%2==0)
//             sum+=i;
//     }
    
//     ans.push_back(sum);
// }

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        int sum=0;
        for(auto i: nums)
             if(i%2==0)
                sum+=i;
        
        for(auto i: queries)
        {
            int v= i[0];
            int id= i[1];
            
            if(nums[id]%2==0)
                sum=sum-nums[id];
            
            nums[id]+=v;
            if(nums[id]%2==0)
                sum+=nums[id];
            
            ans.push_back(sum);
        }
        
    
       
    
    
        return ans;
    }

    
};