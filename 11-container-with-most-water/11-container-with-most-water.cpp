class Solution {
public:
    int maxArea(vector<int>& h) 
    {
        int max=0;
        
        
        int i=0,j=h.size()-1;
        
        while(i<j)
        {
            int l= j-i;
            int b= min(h[i],h[j]);
            
            int area=l*b;
            if(area>max)
                max=area;
            
            // if(h[i]<h[j])
            //     i++;
            // else
            //     j--;
                
            while (h[i] <= b && i < j) i++;
        while (h[j] <= b && i < j) j--;
        }
        
        return max;
        
    }
};