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
    ListNode* partition(ListNode* head, int x) {
        ListNode* h1 = NULL ; 
        ListNode* h2 = NULL ; 
        ListNode*curr1 = NULL ;
        ListNode*curr2 = NULL ; 
        ListNode*temp = head ; 
        while(temp !=  NULL){
            ListNode*newNode = new ListNode(temp->val) ; 

            if(temp->val < x){
                if(h1==NULL){
                    h1 = newNode ; 
                    curr1 = newNode ; 
                }
                else {
                    curr1->next = newNode ; 
                    curr1 = curr1->next ; 
                }
            }
            else{
                if(h2==NULL){
                    h2 = newNode ; 
                    curr2 = newNode ; 
                }
                else{
                    curr2->next = newNode ; 
                    curr2 = newNode ; 
                }
            }
            temp = temp->next ; 
        }
        if(h1==NULL)return h2  ; 
        curr1->next = h2 ; 
        return h1 ; 
        return head ; 
    }
};