/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) 
    {   
        if(!node)
            return NULL;
     
        queue<Node*>q;
        unordered_map<Node*,Node*>map;
        //Making every node then putting neihbours in list
        Node* t= new Node(node->val,{});
        map[node]=t;
        q.push(node);
        
        while(!q.empty())
        {
            Node* temp= q.front();
            q.pop();
            
            for(auto i: temp->neighbors)
            {
                if(!map[i])
                {
                    Node* x= new Node(i->val,{});
                    
                    map[i]=x;
                    q.push(i);
                    
                }
                
                map[temp]->neighbors.push_back(map[i]);
                
            }
            
        }
        
        return t;
        
    }
};


