class Solution {
public:
    int maximumSwap(int num) {
        string n= to_string(num);
        unordered_map<char,int>map;
        for(int i=0;i<n.size();i++)
        {
            map[n[i]]=i;
        }
        
        for(int i=0;i<n.size();i++)
        {
            for(int j=9;j>n[i]-'0';j--)
            {
                if(map[j+'0']>i)
                {
                    swap(n[i],n[map[j+'0']]);
                    // cout<<n[i]<<;
                    return stoi(n);
                }
            }
        }
        
        return stoi(n);
    }
};