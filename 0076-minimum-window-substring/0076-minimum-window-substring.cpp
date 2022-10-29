class Solution {
public:
    string minWindow(string s, string t) {
        // stri hard
        int l=0,r=0;
        int n= s.size();
        int sz= t.size();
        int start=-1;
        unordered_map<char,int>map;
        
        if(sz>n)
            return "";
        
        for(auto i: t)
        {
            map[i]++;
        }
        int cnt=t.size();
        int mini=INT_MAX;
        int o=1;
        while(r<n)
        {
            if(map[s[r]]>0) 
                cnt--;
            
            map[s[r]]--;
            
             
                
                while(cnt==0)
                {
                    // cout<<map[s[l]]<<" ";
                    if(r-l+1 < mini)
                    {
                        mini= r-l+1;
                        start=l;
                    }
                    
                    map[s[l]]++;
                    
                    if(map[s[l]]>0) 
                        cnt++;
                    
                    l++;    
            }
            
            
            r++;
        }
        
        if(start==-1)
            return "";
        
        return s.substr(start,mini);
        
    }
};