class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int>pcount(26,0);
        vector<int>scount(26,0);
        
           int m= s.size(),n=p.size();
        if(n>m)
            return {};
        
        for(auto i:p)
            pcount[i-'a']++;
        for(auto i:s.substr(0,n))
            scount[i-'a']++;
        
        if(pcount==scount)
            ans.push_back(0);
        
        for(int i=n;i<m;i++)
        {
            scount[s[i-n]-'a']--;
            scount[s[i]-'a']++;
            
            if(pcount==scount)
                ans.push_back(i-n+1);
            
        }
        return ans;
    }
};