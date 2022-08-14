void h(vector<string>&ans , string temp, int n, int m)
{
    if(m==0 and n==0)
    {
        ans.push_back(temp);
        return;
    }
    
    if(m>0)
    {
        h(ans,temp+")",n,m-1);
    }
    if(n>0)
    {
        h(ans,temp+"(",n-1,m+1);
    }
}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp="";
        h(ans,temp,n,0);
        return ans;
    }
};