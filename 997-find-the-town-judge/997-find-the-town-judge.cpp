class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        if(n==1)
            return n;
        unordered_map<int,int>map;
        
        for(auto i: trust)
        {
            map[i[1]]++;
            map[i[0]]--;
            
            
        }
        
        for(auto i: map)
        {
            if(i.second==n-1)
                return i.first;
        }
        
         return -1;
    }
       
};