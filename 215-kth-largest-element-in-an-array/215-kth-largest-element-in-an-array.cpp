class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {   
        
        // priority_queue<int,vector<int>,greater<int>>q; //Min. heap
        
        priority_queue<int>q; //Min heap using minus
        
        for(auto i: nums)
        {   
            i=i*-1; //this line
            if(q.size()<k)
                q.push(i);
            else
            {
                if(i<q.top())
                {
                    q.pop();
                    q.push(i);
                }
            }
        }
        return -q.top();
        
        
//         sort(nums.begin(),nums.end());      
//         int n= nums.size();
//         return nums[n-k];
        
    }
};