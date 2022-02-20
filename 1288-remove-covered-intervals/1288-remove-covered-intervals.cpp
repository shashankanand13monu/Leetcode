bool comp(vector<int> &a,vector<int> &b) {
	return a[1]<b[1];
}
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(),intervals.end());
        
        int c=1;
        vector<int>prev= intervals[0];
        
        for(int i=1;i<intervals.size();i++)
        {
            if(prev[0]<intervals[i][0] and prev[1]<intervals[i][1])
                c++;
            
            if(prev[1]<intervals[i][1])
                prev=intervals[i];
        }
        // c=c+1;
        return c;
    }
};