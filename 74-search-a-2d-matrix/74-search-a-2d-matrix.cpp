class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
       
    int x= matrix.size();
        int y= matrix[0].size();
        
        // int x= matrix.size();
        // int y= matrix[0].size();
        cout<<x<<y;
        int i=0;
        int j= y-1;
        
        while(j>=0&&i<=x-1)
        {   
            // cout<<i<<"**"<<j;
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]<target)
                i++;
            else
                j--;
        }
        
        return false;        
            
       
    }
};