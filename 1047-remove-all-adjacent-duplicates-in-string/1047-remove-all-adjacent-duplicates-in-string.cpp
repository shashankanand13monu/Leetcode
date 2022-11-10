class Solution {
public:
    string removeDuplicates(string s) {
        // stack<char>st;
        string st="";
        st.push_back(s[0]);
        // st.push(s[0]);
        for(auto i=1;i<s.size();i++)
        {
            if(st.size()!=0 and st.back()==s[i])
            {
                st.pop_back();
                continue;
            }
            else
                st.push_back(s[i]);
        }
//         string ans="";
//         while(!st.empty())
//         {
//             ans= ans+ st.top();
//             st.pop();
//         }
        
//         reverse(ans.begin(),ans.end());
        
        return st;
    }
};