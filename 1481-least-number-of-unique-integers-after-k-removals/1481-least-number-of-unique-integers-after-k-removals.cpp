class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(auto x: arr){
            mp[x]++;
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:mp){
            pq.push(it.second);
           
        }
        while(k>0){
         int m=pq.top();
          if(m>k)
              break;
            else{
                k-=m;
                pq.pop();
            
            }
            
        }
        return pq.size();
          
    }
};