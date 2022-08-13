class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // unordered_map<char,int>map;
        vector<int>map(256,-1);
        
        int l=0,r=0,len=0;
        
        while(r<s.size())
        {
            if(map[s[r]]!=-1)
                l= max(l,map[s[r]]+1);
            
            map[s[r]]=r;
            
            
            
            len= max(len,r-l+1);
              r++;  
        }
        
        return len;
    }
};