class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
        unordered_map<int,int>map;
        for(auto i: arr)
            map[i]++;
        
        priority_queue<int,vector<int>,greater<int>>q;
        // priority_queue <int, vector<int>, greater<int>> g = gq;  
        for(auto i: map)
            q.push(i.second);
        
        while(k>0)
        {
            int temp= q.top();
            
         
           if(k<temp)
               break;
            else
            {
                 k=k-temp;
                q.pop();
            }
               
        }
        
        return q.size();
    }
};