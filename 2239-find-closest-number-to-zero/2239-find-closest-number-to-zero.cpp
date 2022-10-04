class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        
        int x= INT_MAX;
        for(auto i: nums)
        {
            int c= abs(i);
            
            if(c< abs(x))
            {
                x=i;
            }
        }
        if(x<0)
        {
            for(auto i: nums)
                if(i== -x)
                    return i;
        }
        return x;
    }
};