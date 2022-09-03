class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        unordered_map<int,vector<int> >mp;
   
    vector<int> color(n+1,-1);
        
        for(auto d:dislikes){
            mp[d[0]].push_back(d[1]);
            mp[d[1]].push_back(d[0]);
        }
        
        for(int i=1;i<=n;i++)
        {
            if(color[i]==-1)
            {
                color[i]=1;
                 queue<int> q;
                q.push(i);
                
                while(!q.empty())
                {   
                    int top= q.front();
                    q.pop();
                    // color[i]=1;
                    
                    for(auto j: mp[top])
                    {
                        if(color[j]==-1)
                        {
                            color[j]=1-color[top];
                            q.push(j);
                        }
                        else if(color[j]==color[top])
                            return false;
                    }
                }
            }
        }
        return true;
        
    }
};