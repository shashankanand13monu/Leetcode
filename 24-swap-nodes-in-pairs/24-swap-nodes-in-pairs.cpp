/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) 
    {
        
//          if(!head || !head->next) return head;
//         //Swapping part happens here, please draw to visualize
//         ListNode *temp = head->next;
//         head->next = swapPairs(temp->next); 
//         temp->next = head;

//         return temp;
        if(!head or !head->next)
            return head;
        
        ListNode* dum = new ListNode(0);
        dum->next=head;
        auto p = dum;
        
        while(p->next and p->next->next)
        {
            auto c= p->next;
            auto f=c->next;
            auto t=f->next;
            
            p->next=f;
            f->next=c;
            c->next=t;
            
            p=c;
            
            
        }
       
        
        return dum->next;
        
    }
};