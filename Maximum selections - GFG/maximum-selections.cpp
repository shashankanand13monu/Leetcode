// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// ranges[i][0] is the start of ith range
// ranges[i][1] is the end of ith range

class Solution{
public:
    int max_non_overlapping( vector< vector<int> >& v )
    {   
        
        sort(v.begin(),v.end());
        
        int count=0,l=0,r=1,n=v.size();
        while(r<n)
        {
            if(v[l][1]<=v[r][0]) // Non-overlapping case(Case 1)
            {
                l=r;
                r++;
            }                                     //  ----
            else if(v[l][1]<=v[r][1])  // Case 2 ----|    |----
            {
                count++;
                r++;
            }
            else if(v[l][1]>v[r][1])   // Case 3 contained
            {
                count++;
                l=r;
                r++;
            }
        }
        return n-count;   
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		vector< vector<int> > v(n,vector<int>(2));
		for(int i=0; i<n; i++)
			cin>> v[i][0] >> v[i][1];
			
        Solution ob;
		cout<< ob.max_non_overlapping(v) << endl;
	}
	return 1;
}

  // } Driver Code Ends