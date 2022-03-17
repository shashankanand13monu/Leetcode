class Solution {
public:
    int scoreOfParentheses(string ss) {
        
        int score=0;
        
        stack<int>s;
        
        for(auto i: ss)
        {
            if(i=='(')
            {
                s.push(score);
                score=0;
            }
            else
            {
                score= s.top()+ max(2*score,1);
                s.pop();
            }
        }
        
        return score;
        
        
    }
};