class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
           priority_queue<pair<double,int>> q;
        // priority_queue <pair<int,int>, vector<int>, greater<int>> q;
        int d=0;
        for(auto i: points)
        {
            double dis= -sqrt(pow(i[0],2)+ pow(i[1],2));
            // int dis=  -sqrt(sqr);
            
            q.push(make_pair(dis,d));
            d++;
            
        }
        
        vector<vector<int>>ans;
        
        while(k--)
        {
            int id= q.top().second;
            cout<<"hi";
            ans.push_back(points[id]);
            q.pop();
            
        }
        
        return ans;
        
    }
};