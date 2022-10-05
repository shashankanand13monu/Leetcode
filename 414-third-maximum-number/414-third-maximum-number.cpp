class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end() );
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        
        int count=0;
        
        priority_queue<int>q(nums.begin(),nums.end());
        
        cout<<q.top()<<"\n";
        if(q.size()<3)
            return q.top();
        for(auto i: nums)
            cout<<i<<",";
        
        q.pop();
        q.pop();
        // q.pop();
        
        return q.top();
    }
};