
void dfs(vector<vector<int>>& image, int sr, int sc, int newcolor,int color)
{
    int m= image.size();
    int n= image[0].size();
    
    if(sr<0 or sc<0 or sr>=m or sc>=n or image[sr][sc]!=color )
        return;
    
    image[sr][sc]=newcolor;
    dfs(image,sr+1,sc,newcolor,color);
    dfs(image,sr,sc+1,newcolor,color);
    dfs(image,sr-1,sc,newcolor,color);
    dfs(image,sr,sc-1,newcolor,color);
    
    
    
}

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        
        int col= image[sr][sc];
        
        if(col!=newcolor)
            dfs(image,sr,sc,newcolor,col);
        
        return image;
    }
};