class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        priority_queue<pair<int,int>>q;   
        
        unordered_map<int,int>map;
        
        for(auto i: nums)
            map[i]++;
        
        for(auto i: map)
        {
            q.push(make_pair(i.second,i.first)); //5 times-->1
        }
        
        vector<int>ans;
        
        while(k--)
        {
            ans.push_back(q.top().second);
            q.pop();
        }
        
        return ans;
        
    }
};