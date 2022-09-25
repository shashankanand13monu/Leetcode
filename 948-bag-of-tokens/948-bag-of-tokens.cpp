class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int power) {
        
        int i=0;
        int j= t.size()-1;
        
        int scr=0;
        int mx_scr=0;
        
        sort(t.begin(),t.end());
        
        while(i<=j)
        {   
            if(t[i]<=power)
            {
                scr++;
                
                power=power-t[i];
                i++;

                
            }
            else if(scr>0)
            {
                power=power + t[j--];
                scr--;
                
                
                
            }
            else
                break;
                    
            mx_scr= max(mx_scr,scr);

            
            
        }
        
        return mx_scr;
    }
};