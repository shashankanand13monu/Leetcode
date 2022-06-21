class Solution {
public:
    int furthestBuilding(vector<int>& h, int bricks, int ladders) {
      priority_queue<int,vector<int>, greater<int>>p ;
          
          for(int i=0;i<size(h)-1;i++)
          {
              int d= h[i+1]-h[i];
              if(d>0)
                  p.push(d);
              if(p.size()>ladders)
              {
                  bricks=bricks-p.top();
                  p.pop();
              }
              if(bricks<0)
              {
                  return i;
              }
              
              
          }
        return h.size()-1;
    }
};