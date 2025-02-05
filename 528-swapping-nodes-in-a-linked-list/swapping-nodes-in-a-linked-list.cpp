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
    ListNode* swapNodes(ListNode* head, int k) {
        int count = 0;

        ListNode*temp = head ; 
        while(temp!=NULL){
            count++ ;
            temp = temp->next ; 

        }

        ListNode*first = head  ;
        ListNode*second = head ; 
        temp = head ; 

        int dist = count - k +1 ;
        int i = 1 ; 
        while(temp!=NULL){
            
            if(i==k){
                first = temp ; 
            }
            if(i==dist){
                second = temp ; 
            }
            temp = temp->next ; 
            i++  ; 
        }
        swap(first->val,second->val);
        return head; 
    }
};