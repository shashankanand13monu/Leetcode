class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0;
        int sum=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(auto i: nums)
        {
            sum=sum+i;
            // int rem= abs(sum%k);
            int rem= sum%k;
            if(rem<0) rem=rem+k;
            
            if(m[rem])
                ans=ans+m[rem];
            
            m[rem]++;
            
        }
        return ans;
    }
};