class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) 
    {
        unordered_map<int,int>map;
        vector<int>v(rooms.size(),0);
        queue<int>q;
        
           for(auto j : rooms[0])
           {
               q.push(j);
               v[j]++;
           }
                
        v[0]++;
        
        while(!q.empty())
        {
           
            int n= q.size();
         int temp= q.front();
                  q.pop();
            
           for(auto i: rooms[temp])
           {
               if(v[i]==0)
               {
                   q.push(i);
               v[i]++;
               }
                
               
               
           }
            
            
            
        }
        
        for(auto i: v)
            if(i==0)
                return false;
        
        return true;
        
    }
};