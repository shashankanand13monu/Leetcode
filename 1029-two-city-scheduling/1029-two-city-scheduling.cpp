bool comp(vector<int>a,vector<int>b)
{
    return a[1]-a[0]>b[1]-b[0];
}

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& c) {
        
        sort(c.begin(),c.end(),comp);
        int ans=0;
        for(int i=0;i<c.size();i++)
        {
            i<c.size()/2 ? ans+=c[i][0]: ans+=c[i][1];
        }
        return ans;
        
    }
};