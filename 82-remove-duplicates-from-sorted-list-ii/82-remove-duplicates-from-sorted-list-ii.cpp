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
    ListNode* deleteDuplicates(ListNode* head) 
    {
      unordered_map<int,int>a;
        
        if(!head||!head->next)
            return head;
        
        auto  temp= new ListNode();
        temp->next=head;
        ListNode* pre=temp;
        ListNode* curr=temp->next;
        

        while(curr)
        {
            if(curr->next&&curr->val==curr->next->val)
            {   
                while(curr->next&&curr->val==curr->next->val)
                curr=curr->next;
                
                pre->next=curr->next;
            }
            else
                pre=curr;
            
            curr=curr->next;
            
        }
        return temp->next;
        
        
        
        
    }
};