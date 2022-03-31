class Solution {
public:
    bool isPalindrome(int x) 
    {
     
        int t,r=0;
        unsigned int ans=0;
        t=x;
        while(t>0)
        {
            r= t%10;
            ans=ans*10+ r;
            t=t/10;
        }
        
        if(ans==x)
            return true;
        cout<<ans;
        return false;
        
    }
};