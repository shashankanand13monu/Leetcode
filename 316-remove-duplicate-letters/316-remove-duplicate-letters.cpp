class Solution {
public:
    string removeDuplicateLetters(string s) 
    {
        vector<int>last(26,0);
        
        for(auto i=0;i<s.size();i++)
            last[s[i]-'a']=i;
        
        vector<bool> seen(26, false); // keep track seen
        stack<char> st;
        
        for(auto i=0;i<s.size();i++)
        {
            int curr= s[i]-'a';
            
            if(seen[curr])
                continue;
            
            while(!st.empty() and st.top()>s[i] and i<last[st.top()-'a'])
            {
                seen[st.top()-'a']=false;
                st.pop();
            }
            
            st.push(s[i]);
            seen[curr]=true;
            
        }
        
        string x="";
        while(!st.empty())
        {
            x=x+st.top();
            st.pop();
        }
        reverse(x.begin(),x.end());
        return x;
        
        
    }
};