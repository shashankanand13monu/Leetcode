class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n= points.size();
        int mx=0;
        for(int i=0;i<n;i++)
        {
            int dup=0;
            map<pair<int,int>,int>map;

            for(int j=i;j<n;j++)
            {
                int dy= points[i][1]-points[j][1];
                int dx= points[i][0]-points[j][0];
                
                if(dy==0 and dx==0) 
                    dup++;
                else
                {
                    int gc= __gcd(dy,dx);
                    dy=dy/gc;
                    dx=dx/gc;
                    
                    map[{dy,dx}]++;   
                }      
            }
            mx= max(mx,dup);
            
            for(auto it: map)
            {
                mx= max(mx,it.second+dup);
            }
        }
        return mx;
      
    }
};