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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        if(!l1 or !l2)
            return NULL;
        
        int carry=0;
        int x=0;
        int y=0;
        int sum=0;
        
        auto temp= new ListNode();
        auto curr=temp;
        
        while(l1 or l2 or carry)
        {
            if(l1)
                x= l1->val;
            else
                x=0;
            
            if(l2)
                y= l2->val;
            else
                y=0;
            
            
            sum= x+y+carry;
            carry= sum/10;
            sum=sum%10;
            curr->next= new ListNode(sum);
            
            curr=curr->next;
           
            
            if(l1)
                l1=l1->next;
            else
                l1=nullptr;
            
            if(l2)
                l2=l2->next;
            else
                l2=nullptr;
            
        }
        
        return temp->next;
        
    }
};