class Solution {
public:
    string removeDuplicates(string s, int k) 
    {
        vector<pair<char,int>> arr ;
        
        for(auto i: s)
        {
            if(arr.empty() or arr.back().first!=i)
                arr.push_back(make_pair(i,0));
           
                ++arr.back().second;
                if(arr.back().second==k)
                    arr.pop_back();
            
        }
        
        string ans="";
        for(auto j: arr)
        {
            ans=ans+ string(j.second,j.first);
        }
        
        return ans;
        
    }
};