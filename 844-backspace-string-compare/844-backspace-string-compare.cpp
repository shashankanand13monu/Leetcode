class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        stack<char>stk;
        
        int n1= s.size();
        int n2= t.size();
        
        string s1="";
        string s2="";
        
        for(int i=0;i<n1;i++)
        {
            int x= s1.size();
            
            s1.push_back(s[i]);
            
            if(s[i]=='#')
            {
                s1.pop_back();
                if(s1.size()!=0)
                    s1.pop_back();
            }
            
        }
        
        for(auto j : t)
        {
            s2.push_back(j);
            
            if(j=='#')
            {
                s2.pop_back();
                
                if(s2.size()!=0)
                    s2.pop_back();     
            }
        }
        
        cout<<s1;
        return s1==s2;
    }
};