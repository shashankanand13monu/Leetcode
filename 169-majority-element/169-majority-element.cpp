class Solution {
public:
    int majorityElement(vector<int>& arr) {
        
    int i, candidate = -1, votes = 0;
    // Finding majority candidate
        int n= arr.size();
    for (i = 0; i < n; i++) {
        if (votes == 0) {
            candidate = arr[i];
            votes = 1;
        }
        else {
            if (arr[i] == candidate)
                votes++;
            else
                votes--;
        }
    }
    int count = 0;
    // Checking if majority candidate occurs more than n/2
    // times
    for (i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }
 
    if (count > n / 2)
        return candidate;
    return -1;
    }
};