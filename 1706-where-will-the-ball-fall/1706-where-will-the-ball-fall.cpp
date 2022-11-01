class Solution {
public:
    vector<int> findBall(vector<vector<int>>& g) {
        int n= g.size();
        int m= g[0].size();
        vector<int>ans;
        
        for(int j=0;j<m;j++)
        {
            int curr=j;
            int next=-1;
            
            for(int i=0;i<n;i++)
            {
                next= curr+ g[i][curr]; //next row to go
                
                if(next<0 or next>=m or g[i][curr]!=g[i][next])
                {
                    curr=-1;
                    break;
                }
                
                curr=next;
            }
            ans.push_back(curr);
        }
        
        return ans;
        
        
    }
};