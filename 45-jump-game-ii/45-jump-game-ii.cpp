class Solution {
public:
    int jump(vector<int>& nums) 
    {   
        int jump=0;
        int curr=0;
        int fur=0;
          if(nums.size()==1)
        {
            return 0;
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            fur=max(fur,i+nums[i]);
            
            if(curr==i)
            {
                curr=fur;
                jump++;
            }
            
            if(curr>nums.size())
                break;
        }
        return jump;
    }
};