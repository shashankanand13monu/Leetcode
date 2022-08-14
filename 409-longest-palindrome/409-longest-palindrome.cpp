class Solution {
public:
    int longestPalindrome(string s) 
    {
            unordered_map<char,int>a;
        
        int mx_odd=0;
        char mx;
        for(auto i: s)
            ++a[i];
        
        
        
        int count=0;
        int length=0;
        int max=0;
        
        for(auto i: a)
        {
            if(i.second %2!=0 and i.second > mx_odd)
            {
                mx_odd=i.second;
                mx=i.first;
            }
        }
        length=length+mx_odd;
        a[mx]=0;
        
        for(auto j:a)
        {
           if(j.second%2==0)
               length+=j.second;
            else
            {
                length+=j.second-1;
            }
        }
        
//         if(max)
//             length=length+1;
        
        return length;
        
    }
};