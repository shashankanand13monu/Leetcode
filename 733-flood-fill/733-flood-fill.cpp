void dfs(vector<vector<int>>& img,int x,int y,int i,int j)
{
    if(i<0 or j<0 or i>=img.size() or j>=img[0].size() or img[i][j]!=x)
        return;
    
    img[i][j]=y;
    
    dfs(img,x,y,i+1,j);
    dfs(img,x,y,i,j+1);
    dfs(img,x,y,i-1,j);
    dfs(img,x,y,i,j-1);

}

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        int x= image[sr][sc];
        int y= newColor;
        int i=sr,j=sc;
        if(y!=x)
        dfs(image,x,y,i,j);
        return image;
        
    }
};