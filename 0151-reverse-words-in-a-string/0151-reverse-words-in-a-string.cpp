class Solution {
public:
    string reverseWords(string s) {
        
        int m=0;
        
        while(m<s.size() and s[m]==' ')
            m++;
        
        int n=s.size()-1;
        
        while(n>0 and s[n]==' ')
            n--;
        
        vector<string>ans;
        
        string t;
        for(int i=m;i<=n;i++)
        {
            if(s[i]==' ')
            {
                ans.push_back(t);
                t="";
                while(s[i]==' ')
                    i++;
                i--;
                continue;
            }
            t=t+s[i];
            
        }
        ans.push_back(t);
        
        reverse(ans.begin(),ans.end());
        string a;
        for(auto i: ans)
        {
            a= a+ i;
            a.push_back(' ');
        }
        a.pop_back();
        
        return a;
    }
};