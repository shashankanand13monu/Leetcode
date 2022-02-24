 int check(int a,int b,string x,string y,unordered_map<char,int> hash,unordered_map<char,int> phash)
            {
                for(int i=a;i<=b;i++)
                {
                    if(hash[y[i]]!=phash[y[i]])
                        return -1;
                }
                return a;
            }

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       int s_len = s.length();
        int p_len = p.length();
        
        if(s.size() < p.size()) return {};
        
        vector<int> freq_p(26,0);
        vector<int> window(26,0);
        
        //first window
        for(int i=0;i<p_len;i++){
            freq_p[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        
        vector<int> ans;
        if(freq_p == window) ans.push_back(0);
        
        for(int i=p_len;i<s_len;i++){
            window[s[i-p_len] - 'a']--;
            window[s[i] - 'a']++;
            
            if(freq_p == window) ans.push_back(i-p_len+1);
        }
        return ans;
       
           
        
    }
};