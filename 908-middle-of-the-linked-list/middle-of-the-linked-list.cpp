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
    ListNode* middleNode(ListNode* head) {
        int count = 0 ;
        ListNode*curr = head;
        while(curr!=nullptr){
            count++;
            curr= curr->next ;
        }
        int mid = count/2 ; 
        curr = head;
        while(mid>0){
            mid--;
            curr=curr->next;
            
        }
        return curr ; 
    }
};