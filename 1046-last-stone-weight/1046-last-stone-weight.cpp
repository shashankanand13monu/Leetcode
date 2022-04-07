class Solution {
public:
    int lastStoneWeight(vector<int>& st) {
        
        if(st.size()==1)
            return st[0];
        sort(st.begin(),st.end());
        
        
        while(st.size()>1)
        {
            int x= st.back();
            st.pop_back();
            int y= st.back();
            st.pop_back();
            
            if(x!=y)
            {
                y=y-x;
                if(y<0)
                    y=y*-1;
                st.push_back(y);
                sort(st.begin(),st.end());
            }
                
        }
        
        if(st.size()==0)
            return 0;
        
        return st[0];
        
    }
};