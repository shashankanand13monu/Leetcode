class Solution {
public:
    int mySqrt(int x) 
    {
        
        if(x==0 or x==1)
            return x;
        
        int i=2;
        unsigned int ans=0;
    int lo=0;
        int hi=x/2;
        
        while(lo<=hi)
        {
            long int mid = lo + (hi-lo+1)/2;
            
            if(x/mid==mid)
                return x/mid;
            else if(x/mid>mid)
                lo=mid+1;
            else
                hi=mid-1;
        }
        
        return lo-1;
        
    }
};