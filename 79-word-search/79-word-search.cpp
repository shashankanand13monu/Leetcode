bool dfs(vector<vector<char>>& board,string word,int i,int j,int k,string &ans,int &x)
{
    
    if(k==word.size())
    {
       
        return true;
    }
    
    if(i<0 or j<0 or i>=board.size() or j>= board[0].size() or board[i][j] != word[k])
        return false;
    board[i][j]='0';

    
       bool s= dfs(board,word,i+1,j,k+1,ans,x) or
        dfs(board,word,i,j+1,k+1,ans,x) or
        dfs(board,word,i-1,j,k+1,ans,x) or
        dfs(board,word,i,j-1,k+1,ans,x);


    
    board[i][j] = word[k];
    return s;
        
        
        
}

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) 
    {   
        string ans;
        int x=0;
        int k=0;
        for(auto i=0;i<board.size();i++)
        {
            for(auto j=0;j<board[0].size();j++)
            {
                if(board[i][j]==word[0] and dfs(board,word,i,j,k,ans,x))
                    return true;
            }
        }
       
        return false;
    }
};