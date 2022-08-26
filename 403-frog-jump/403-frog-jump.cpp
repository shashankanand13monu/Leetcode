class Solution {
public:
    bool canCross(vector<int>& stones) {
        unordered_map<int,unordered_set<int>>map;
        
        map[1]={1};
        
        for(int i=1;i<stones.size();i++)
        {
            int pos= stones[i];
            for(auto j: map[pos])
            {
                int j1=j;
                int j2=j+1;
                int j3=j-1;
                
                map[j1+pos].insert(j1);
                map[j2+pos].insert(j2);
                map[j3+pos].insert(j3);

            }
        }
        
        return map[stones.back()].size()!=0;
    }
};