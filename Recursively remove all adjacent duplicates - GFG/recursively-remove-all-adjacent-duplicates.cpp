//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    string rremove(string s){
        // code here
        bool flag = false;
        while(s.size() > 0 || flag)
        {
            string temp = "";
            
            for(int i = 0; i < s.size(); i++)
            {
                while(i < s.size()){
                    if(i < s.size() -1 && s[i] == s[i+1]){
                        i++;
                        flag = true;
                    } else if(i > 0 && s[i] == s[i-1]){
                        i++;
                        flag = true;
                    } else break;
                    
                }
                temp += s[i];
            }
            
            s = temp;
            if(flag == false) break;
            flag = false;
        }
        
        return s;
    }
 
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends