class Solution {
public:
    string frequencySort(string s) {
       
        unordered_map<char,int>map;
        
        for( auto i: s)
            map[i]++;
        
        string ans ="";
        vector<string>arr(s.size()+1,"");
        
        for(auto i: map)
        {
            char c= i.first;
            int n= i.second;
            
            arr[n].append(n,c);
            
    
        }
        
        for(int i= arr.size()-1;i>=0;i--)
        {
            if(!arr[i].empty())
                ans=ans+ arr[i];
        }
            
        
        
        return ans;
    }
};