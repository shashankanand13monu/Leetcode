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
    bool isPalindrome(ListNode* head) {
        
        ListNode*s=head;
        ListNode*f=head;
        ListNode*st=head;
        
        while(f and f->next)
        {
            s=s->next;
            f=f->next->next;
        }
        
        ListNode* curr=s;
        ListNode* prev=NULL;
        ListNode* temp=curr->next;
        while(curr)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        
        while(prev and st)
        {
            if(prev->val!=st->val)
                return false;
            
            st=st->next;
            prev=prev->next;
        }
        
        return true;
        
    }
};