//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    
public:
    
    
    int f(int i,int j,vector<int>a,vector<vector<int>>&m){
        if(i==j)
        return 0;
        
        if(m[i][j]!=-1){
            return m[i][j];
        }
        int res= INT_MAX;
        int step=0;
        for(auto k=i;k<j;k++){
            step= a[i-1]*a[j]*a[k] + f(i,k,a,m)+f(k+1,j,a,m);
            res= min(res,step);
        }
        
        return m[i][j]= res;
    }

    int matrixMultiplication(int N, int arr[])
    {
        vector<int>a(arr,arr+N);
        vector<vector<int>>m(N,vector<int>(N,-1));
        int dp[N][N];
        
         for (int i = 1; i < N; i++)
            dp[i][i] = 0;
        
        // int res=1e9;
        for(int i=N-1;i>=1;i--){
            for(int j=i+1;j<N;j++){
                // int step=0;
                int res=1e9;
                for(auto k=i;k<j;k++){
           int step= a[i-1]*a[j]*a[k] + dp[i][k]+ dp[k+1][j];
            res= min(res,step);
        }
        dp[i][j]=res;
            }
        }
        // return f(1,N-1,a,m);
        return dp[1][N-1];
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends