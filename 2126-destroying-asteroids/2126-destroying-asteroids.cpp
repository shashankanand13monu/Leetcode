class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
             long long int m=mass;
    
    sort(asteroids.begin(),asteroids.end());   //sorting the mass of the asteroids in //increasing order.
   
    //checking if mass of the planet is greater than asteroid then adding the mass in the planet else returning false
    
    for(int i=0;i<asteroids.size();i++){
    
        if(m>=asteroids[i])
            m+=asteroids[i];
        else
            return false;
        
    }
    return true;
      
    }
};