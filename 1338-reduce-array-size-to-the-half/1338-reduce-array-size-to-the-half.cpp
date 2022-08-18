class Solution {
public:
    int minSetSize(vector<int>& arr) {
       priority_queue<int>q;
         // priority_queue<pair<int, int>> q;
        
        unordered_map<int,int>map;
        
        for(auto i: arr)
            map[i]++;
        
        for(auto i: map)
        {
            q.push(i.second);
            
        }
        
        int sz= arr.size();
        int c=0;
        
        while(sz>(arr.size()/2) and !q.empty())
        {
            int temp_size= q.top();
            sz=sz-temp_size;
            c++;
            // cout<<sz<<",";
            q.pop();
        }
        
        // sz==0 ? return 1: return sz-1;
        return c;
        
        
    }
};