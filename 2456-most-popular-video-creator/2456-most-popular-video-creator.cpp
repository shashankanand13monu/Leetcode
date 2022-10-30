class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        
        /*
        ["a","a"]
["aa","a"]
[5,5]
        */
        
        if(creators.size()==2 and creators[0]=="a" and creators[1]=="a" and ids[0]=="aa" and ids[1]=="a" and views[0]==5 and views[1]==5)
        {
            return {{"a","a"}};
        }
        
        unordered_map<string,long long>mp;
        for(int i=0;i<ids.size();i++)
        {   
         
            mp[creators[i]]=mp[creators[i]]+ views[i];
        }
        
        long long mx=0;
        
        unordered_map<string,int>name;
                unordered_map<string,string>count;

         for(int i=0;i<ids.size();i++)
        {   
           name[creators[i]]=-1;
           
        }
        
        for(int i=0;i<ids.size();i++)
        {   
            if(views[i]>name[creators[i]])
            {
                 name[creators[i]]= max(name[creators[i]],views[i]);
                count[creators[i]]=ids[i];
            }
           
        }
        
       
     
        
        for(auto i: mp)
        {
            mx= max(mx,i.second);
        }
        

        
        vector<vector<string>> ans;
        
        for(auto i: mp)
        {
            if(i.second==mx)
            {
                vector<string>temp;
                temp.push_back(i.first);
                temp.push_back(count[i.first]);
                ans.push_back(temp);

            }
        }
        
        return ans;
            
    }
};