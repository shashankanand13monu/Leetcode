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
        unordered_map<Node*,Node*>map;
        queue<Node*>q;
        
        q.push(node);
        
        if(!node)
            return NULL;
        Node* t= new Node(node->val,{});
        map[node]=t;
        
        while(!q.empty())
        {
            Node* x= q.front();
            q.pop();
            
            for(auto i: x->neighbors)
            {
                if(!map[i])
                {   
                    Node* temp = new Node(i->val,{});
                    map[i]=temp;
                    q.push(i);
                }
                map[x]->neighbors.push_back(map[i]);
                
            }
            
        }
        
        return t;
        
    }
};