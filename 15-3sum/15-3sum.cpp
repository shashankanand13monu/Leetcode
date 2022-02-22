class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
          
        vector<vector<int>>a;
        vector<int>x(3,0);
         if(nums.size()<3)
               return a;
        int v=0;
        
        int i=0;
        sort(nums.begin(),nums.end());
                            // cout<<x[0]<<","<<x[1]<<","<<x[2];

        for(i=0;i<nums.size()-2;i++)
        {
            if(i>0&&nums[i-1]==nums[i])
                continue;
            int k=nums.size()-1;
            int j=i+1;
            while(j<k)
            {
                if(nums[k]+nums[j]== -nums[i])
                {
                    x[0]=nums[i];
                    x[1]=nums[j];
                    x[2]=nums[k];
                    a.push_back(x);
                    j++;
                    k--;
                    
                    while (j < k && nums[j] == x[1]) j++;

               
                while (j < k && nums[k] == x[2]) k--;
                }
                else if(nums[k]+nums[j] > -nums[i])
                {
                    k--;
                }
                else if(nums[k]+nums[j] < -nums[i])
                {
                    j++;
                }
                
                // if(nums[j]==nums[j+1]||nums[k]==nums[k--])
                // {
                //     j++;
                //     k--;
                // }
                
            }
            // while (i + 1 < nums.size() && nums[i + 1] == nums[i]) 
            // i++;
        }
        
        // return 
    // a.erase(unique(a.begin(), a.end()), a.end());
        
        return a;
    }
};