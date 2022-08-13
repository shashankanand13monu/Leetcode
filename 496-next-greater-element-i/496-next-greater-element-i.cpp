class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        int next[n];
        int k=n-1;
        next[k]=-1;
        k--;
        stack<int>s;
        
        s.push(nums2[n-1]);
        
        for(int i=nums2.size()-2;i>=0;i--)
        {
            while(!s.empty() and s.top()<nums2[i])
            {
                s.pop();
            }
            
            if(s.empty())
                next[i]=-1;
            else
                next[i]=s.top();
            
            s.push(nums2[i]);
        }
        
        unordered_map<int,int>map;
        for(auto i=0;i<n;i++)
        {
            map[nums2[i]]=next[i];
        }
        vector<int>ans;
        for(auto i: nums1)
        {
            ans.push_back(map[i]);
        }
        
        return ans;
    }
};