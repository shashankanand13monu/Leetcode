class Solution {
public:
    string frequencySort(string s) {
      
        priority_queue<pair<int,char>>q;
        unordered_map<char,int>map;
        
        for( auto i: s)
            map[i]++;
        
        for(auto i: map)
            q.push(make_pair(i.second,i.first)); // [5,t]
        
        string ans="";
        
        while(!q.empty())
        {
            int x= q.top().first;
            char c= q.top().second;
            
            ans.append(x,c);
            
            q.pop();
        }
        return ans;
        
       /* unordered_map<char,int>map;
        
        for( auto i: s)
            map[i]++;
        
        string ans ="";
        vector<string>arr(s.size()+1,"");
        
        for(auto i: map)
        {
            char c= i.first;
            int n= i.second;
            
            arr[n].append(n,c); //No. of chracter to append
            
    
        }
        
        for(int i= arr.size()-1;i>=0;i--)
        {
            if(!arr[i].empty())
                ans=ans+ arr[i];
        }
            
        
        
        return ans;
        */
    }
};