class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>ans(2,-1);
        int id1=-1,id2;
        
        for(int i=0;i<nums.size();i++)
        {   
            
            
            if(nums[i]==target)
            {
              id1=i;
                break;
            }
        }   
        
           for(int j=nums.size()-1;j>=0;j--)
        {   
            
            
            if(nums[j]==target)
            {
              id2=j;
                break;
            }
        }
        
        if(id1!=-1)
        {
            ans[0]=id1;
            ans[1]=id2;
        }
            
        
        return ans;
        
        
    }
};