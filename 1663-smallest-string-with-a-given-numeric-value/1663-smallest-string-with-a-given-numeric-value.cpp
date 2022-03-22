class Solution {
public:
    string getSmallestString(int n, int k) 
    {
        vector<int>a(n,1);
        k=k-n;
        
        int x=n-1;
        
        while(k)
        {
            if(k>25)
            {
                a[x]=26;
                x--;
                k=k-25;
            }
            else
            {
                a[x]=a[x]+k;
                k=0;
            }
        }
        
        string ans= "";
        
        // for(auto i : a)
        // {
        //     cout<<i;
        // }
        
        for(auto i: a)
        {
            ans+=(char(i+96));
        }
        return ans;
        
    }
};