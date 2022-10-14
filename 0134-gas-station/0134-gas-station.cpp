class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int g=0,c=0;
        
        for(auto i: gas)
            g=g+i;
        for(auto i: cost)
            c=c+i;
        //Neetcode 
        if(g<c)
            return -1;
        
        int t_gas=0;
        int star=0;
        for(int i=0;i<gas.size();i++)
        {
            t_gas = t_gas + (gas[i]-cost[i]);
            
            if(t_gas<0)
            {
                t_gas=0;
                star=i+1;
            }
                
        }
        
        return star;
    }
};