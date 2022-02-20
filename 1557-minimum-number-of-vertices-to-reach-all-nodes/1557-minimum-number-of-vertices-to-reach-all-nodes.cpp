class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) 
    {
            unordered_map<int,int>map ;
        
        vector<int>ans;
        
        for(auto i: edges)
        {
            map[i[1]]++;
        }
        
        for(auto i: edges)
        {
            if(!map[i[0]])
            {
                ans.push_back(i[0]);
                map[i[0]]++;
            }
                
        }
   
           
        return ans;
    }
};