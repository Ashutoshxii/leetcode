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
    ListNode* deleteMiddle(ListNode* head) {
         if (head == NULL || head->next == NULL) {
        return NULL;  
    }
        ListNode* fast = head ;
        ListNode* slow = head ;
        ListNode* prev = NULL ;
        while(fast!=NULL&&fast->next !=NULL){
            fast = fast->next->next ;
            prev = slow ; 
            slow = slow->next ;
        }
        if(prev!=NULL){
            ListNode*temp = prev->next ;
            prev->next = temp->next ;
            delete temp ; 
        }
        
        return head ; 
    }
};