// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    
	   vector<int>odd;
	   vector<int>even;
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]<0)
	       odd.push_back(arr[i]);
	       else
	       even.push_back(arr[i]);
	   }
	   int i=0,j=0;
	   int index=0;
	    while(i<odd.size() and j<even.size())
	    {
	        arr[index]=even[j];
	        ++index;
	        arr[index]=odd[i];
	        ++index;
	        j++;
	        i++;
	        
	    }
	    
	    while(j<even.size())
	    {
	        arr[index]=even[j];
	        index++;
	        j++;
	    }
	    
	    while(i<odd.size())
	    {
	        arr[index]=odd[i];
	        index++;
	        i++;
	    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends