class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
       
        int min_far=1;
        int max_far=1;
        int res= nums[0];
        
        for(auto i:nums)
        {
          
            
            int t= max_far*i;
            max_far= max(i*max_far,max(i,i*min_far));
            min_far= min(t,min(i,i*min_far));
            
            res= max(max_far,res);
        }
        
        
        
        // 2- Pass kdane Algo
    /*
       int max_far=INT_MIN;
        for(int i=0;i<nums.size();i++)
           {
                  
            if(num==0)
                num=1;
            
           num= num*nums[i];
      
            
            max_far= max(max_far,num);
            
           
           }
        num=1;
           for(int i=nums.size()-1;i>=0;i--)
           {
            
           
            
            if(num==0)
                num=1;
               
            num= num*nums[i];
               
            max_far= max(max_far,num);
            
           return max_far;
           }
        
        */
        
        return res;
    }
};