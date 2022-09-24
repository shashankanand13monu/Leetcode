class Solution {
public:
    vector<int> findOriginalArray(vector<int>& ch) {
       
        sort(ch.begin(),ch.end());
        if(ch.size()%2!=0)
            return {};
        
        unordered_map<int,int>mp;
        
        for(auto i:ch)
        {
            mp[i]++;
        }
        
        vector<int>ans;
        
        if(mp[0]%2!=0)
            return {};
        
        for(auto i: ch)
        {
            
            if(mp[2*i] and mp[i])
            {
                ans.push_back(i);
                mp[2*i]--;
                mp[i]--;
            }
            if(ans.size()==ch.size()/2)
                break;
                
        }
        if(ans.size()!=ch.size()/2)
            return {};
        return ans;
    }
};