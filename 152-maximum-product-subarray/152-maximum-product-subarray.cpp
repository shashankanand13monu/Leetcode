class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int ans; 
       int max_far=INT_MIN;
     int min_far=1;
        int num=1;
        int n=1;
        for(int i=0,j=nums.size()-1;i<nums.size(),j>=0;i++,j--)
           {
                  
            if(num==0)
                num=1;
            
                 if(n==0)
                n=1;
               
            n= n*nums[j];
               
            max_far= max(max_far,n);
            
           num= num*nums[i];
      
            
            max_far= max(max_far,num);
            
           
           }
        num=1;
//            for(int i=nums.size()-1;i>=0;i--)
//            {
            
           
            
//             if(num==0)
//                 num=1;
               
//             num= num*nums[i];
               
//             max_far= max(max_far,num);
            
           
//            }
        
        return max_far;
    }
};