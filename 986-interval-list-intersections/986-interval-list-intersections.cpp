class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        
        vector<vector<int>>ans;
        vector<int>a(2,0);
        int i=0;
        int j=0;
        
        while(i<A.size() and  j<B.size())
        {   
            // 2 Non Intersection case
            if(A[i][1]< B[j][0])
                i++;
            else if(B[j][1] < A[i][0])
                j++;
            else
            {
                a[0]= max(A[i][0],B[j][0]);
                a[1]= min(A[i][1],B[j][1]);
                ans.push_back(a);
                // a.clear();
                
                if(B[j][1]<A[i][1])
                    j++;
                else
                    i++;
                
            }
        }
        
        return ans;
        
    }
};