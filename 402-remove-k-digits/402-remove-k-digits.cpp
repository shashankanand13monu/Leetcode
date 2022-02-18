class Solution {
public:
    string removeKdigits(string num, int k) 
    {
        deque<char>stk;   
        // stk.push_back(num[0]);
        string ans="";
              if(num.length() <= k)   
            return "0";
        
        // k is 0 , no need of removing /  preforming any operation
        if(k == 0)
            return num;
        
        for(auto i : num)
        {
            while(k>0 and !stk.empty() and stk.back()>i)
            {
                k--;
                stk.pop_back();
            }
            
            stk.push_back(i);
            
            if(stk.size()==1 and stk.back()=='0')
                stk.pop_back();
            
        }
        // 456 -> Increasing all
        while(k>0 and !stk.empty())
        {
            stk.pop_back();
            k--;
        }
        
        while(!stk.empty())
        {
            ans.push_back(stk.front());
            stk.pop_front();
        }
        if(ans.size() == 0)
            return "0";
        return ans;
        
    }
};