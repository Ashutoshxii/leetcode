/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*fast = head ; 
        ListNode*slow = head ;
        if(head==nullptr||head->next==nullptr){
           return nullptr ;
        }
        
        while(fast!=nullptr&&slow!=nullptr){
            fast= fast->next ;
            if(fast==nullptr){
                return nullptr ;
            }
            fast = fast->next ; 
            slow = slow->next ;
            if(slow==fast){
                slow = head ; 
                int c = 0 ; 
                while(slow!=fast){
                    slow = slow->next ; 
                    fast = fast->next ;
                    c++ ; 
                }
                slow->val = c ;
                return slow ; 
            }
        }
         return nullptr ;  
    }
};