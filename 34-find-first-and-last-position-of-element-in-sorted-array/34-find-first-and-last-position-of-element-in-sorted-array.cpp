class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>ans(2,-1);
        int id1=-1,id2=-1;
       
        int lo=0,hi=nums.size()-1;
        
        while(lo<=hi)
        {
            int mid = (lo+hi)/2;
            
            if(nums[mid]==target)
            {
                id1=mid;
                id2=mid;
               while(id1>0 and nums[id1-1]==target)
                   id1--;
                
                while(id2<nums.size()-1 and nums[id2+1]==target)
                    id2++;
                 ans[0]=id1;
            ans[1]=id2;
                return ans;
               
            }
                
            else if(nums[mid]>target)
                hi=mid-1;
            else
                lo=mid+1;
        }
        
         
      
              ans[0]=id1;
            ans[1]=id2;
         
           
        
            
        
        return ans;
        
        /*
        // 2 Pass Start & End
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
        */
        
        
    }
};