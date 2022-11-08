class Solution {
public:
    string makeGood(string s) {
        stack<char>stk;
        
        if(s.size()==1)
            return s;
        string ans="";
        stk.push(s[0]);
        for(int i=1;i<s.size();i++)
        {
            char t= stk.top();
            if(!stk.empty() and abs(t-s[i])==32 )
            {
                stk.pop();
                continue;
            }
            else
                stk.push(s[i]);
        }
        
        while(not stk.empty())
        {
            ans+=stk.top();
            stk.pop();
        }
        
        if(ans.size()>1)
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};