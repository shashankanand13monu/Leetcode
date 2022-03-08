class Solution {
public:
    bool isValid(string s) 
    {
       stack<int> st;
        
        if(s.size()%2!=0)
            return false;
        
        for(auto i : s)
        {
            if(i=='('||i=='{'||i=='[')
            {
                st.push(i);
            }
            else
            {
                if(st.empty() or (st.top()=='(' && i!=')') ||(st.top()=='{'&& i!='}')||(st.top()=='['&&i!=']'))
                {
                   return false;
                }
                 st.pop();
                    
                    
            }
            
        }
        
        return st.empty();
        
        
    }
};