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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0 ; 

        ListNode*temp = head ; 
        while(temp){
            temp = temp->next ;
            count++ ; 
        }
        int k = count - n ; 
        if(k==0)return head->next ; 
        temp = head ; 
        
        while(k>1){
            temp = temp->next ;
            k-- ;
        }
        ListNode*dele = temp->next; 
        temp->next  = dele->next ;
        return head ; 
    }
};