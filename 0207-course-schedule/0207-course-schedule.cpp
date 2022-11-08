class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
        
        unordered_map<int,vector<int>>mp;
        unordered_set<int>vis;
        for(auto i: pre)
        {
            mp[i[1]].push_back(i[0]);    
        }
        
        vector<int>ind(numCourses,0);
        
        for(auto i: mp)
        {
            for(auto j:i.second)
            {
                ind[j]++;
            }
        }
        
        queue<int>q;
        
        for(int i=0;i<numCourses;i++)
        {
            if(ind[i]==0)
                q.push(i);
        }
        
        vector<int>ans;
        while(!q.empty())
        {
            int n= q.front();
            q.pop();
            ans.push_back(n);
            
            for(auto it: mp[n])
            {
                ind[it]--;
                if(ind[it]==0)
                    q.push(it);
            }
        }
        
        return ans.size()==numCourses;
        
        
        
        
        
    }
};