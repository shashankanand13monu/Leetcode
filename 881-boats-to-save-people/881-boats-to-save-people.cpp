class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) 
    {
        int count=0;
        
        sort(p.begin(),p.end());
        
        int l=0;
        int r= p.size()-1;
        
        while(l<=r)
        {
            if(p[r]+p[l]<=limit)
            {
                r--;
                l++;
                
            }
            else
                r--;
            
            count++;
                
        }
        
        return count;
    }
};