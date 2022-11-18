class Solution {
public:
    bool isUgly(int n) {
        
        vector<int>a={2,3,5};
        if(n<1)
            return false;
        for(auto i: a)
        {   
            while(n%i==0)
            {
                 
                n=n/i;
            }
           
        }
        
        return n==1;
        
    }
};