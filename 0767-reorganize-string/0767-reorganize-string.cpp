class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int,char>>pq;
        
        unordered_map<char,int>map;
        for(auto i: s)
            map[i]++;
        
        for(auto i: map)
        {
            pq.push(make_pair(i.second,i.first));
        }
        string ans="";
        
        while(pq.size()>1)
        {
           
            pair<int,char>temp=pq.top();
            pq.pop();
            pair<int,char>temp2=pq.top();
            pq.pop();
            
            ans+=temp.second;
            ans+=temp2.second;
            
            temp.first--;
            temp2.first--;
            
            if(temp.first>0)
                pq.push(temp);
            if(temp2.first>0)
                pq.push(temp2);

        }
        
        if(!pq.empty())
        {
            if(pq.top().first>1)
            return "";
        else
            ans+=pq.top().second;
            
        }
        
        
        return ans;
    }
};