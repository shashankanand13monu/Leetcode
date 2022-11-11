class Solution {
public:
    char findTheDifference(string s, string t) {
        
        char c=0;
        
        for(auto i: s)
            c=c^i;
        for(auto i: t)
            c=c^i;
        return c;
    }
};