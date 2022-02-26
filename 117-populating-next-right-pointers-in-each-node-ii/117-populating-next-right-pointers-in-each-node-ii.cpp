/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) 
    {
        if(!root)
            return NULL;
        
        queue<Node*>q;
        Node* x= root;
        q.push(root);
        // root->next=NULL;
        vector<Node*>arr;
        
        while(!q.empty())
        {
            
            
           
            int size= q.size();
            for(int i=0;i<size;i++)
            {
                Node* t= q.front();
                // arr[i]->next=arr[i+1];
            
            // arr[arr.size()-1]->next=NULL;
            // arr.clear();
            q.pop();
             
                if(size-1!=i)
           t->next=q.front();
            
            if(t->left)
            {
                q.push(t->left);
                // arr.push_back(t->left);
            }
                
            if(t->right)
            {
                 q.push(t->right);
                // arr.push_back(t->right);
            }
            }  
            
        }
        
        return x;
        
    }
};