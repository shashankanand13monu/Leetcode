void dfs(int n,int k,int curr,int i,int prev,vector<int>&ans){
        
        if(i==n-1)
        {
            ans.push_back(curr);
            cout<<"j";
            return;
        }
        
        int next=prev+k;
        if(next<10)
            dfs(n,k,(curr*10)+next,i+1,next,ans);
         next = prev-k;
        if(next>=0 and k!=0)
            dfs(n,k,(curr*10)+next,i+1,next,ans);

            
        
    }

class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        
        vector<int>ans;
        
        if(n==1)
            return {0,1,2,3,4,5,6,7,8,9};
        
        for(int i=1;i<=9;i++)
            dfs(n,k,i,0,i,ans);
        
        return ans;
        
    }
    
    
};