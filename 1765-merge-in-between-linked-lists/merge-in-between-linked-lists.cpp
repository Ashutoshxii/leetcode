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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode*temp = list1 ;
        int k = 0 ; 
        while(k<a-1){
            temp = temp->next; 
            k++ ; 
        }
        ListNode*insert = temp ; 
        while(k<b){
            ListNode*d = temp -> next ;
            temp->next = d->next ;
            delete d; 
            k++ ;
        }
        ListNode* end = temp->next ; 
        insert->next = list2 ; 
        while(insert->next!=NULL){
            insert = insert -> next ;
        }
        insert->next = end ; 
        return list1 ; 
    }
};