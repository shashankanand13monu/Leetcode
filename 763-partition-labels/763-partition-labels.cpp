class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
         unordered_map<char,int>a;
        vector<int>arr;
        
        for(int i=0;i<s.size();i++)
        {
            a[s[i]]=i;
        }
        int size=0;
        int end=0;
        
        
        for(int i=0;i<s.size();i++)
        {
            size=size+1;
            
             end= max(end,a[s[i]]);
                
            if(i==end)
            {
                arr.push_back(size);
                size=0;
            }
        }
        
        return arr;
    }
};