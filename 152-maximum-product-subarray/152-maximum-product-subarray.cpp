class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int ans; 
       int max_far=INT_MIN;
     int min_far=1;
        int num=1;
        
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
            
           
           }
        
        return max_far;
    }
};