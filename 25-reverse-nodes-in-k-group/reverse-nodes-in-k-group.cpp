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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr){
            return head ; 
        }
        ListNode*prev  = nullptr ;
        ListNode*curr = head ;
        ListNode*forw = nullptr ;
        int count = 0 ;  
        while(curr!=nullptr&&count<k){
            forw = curr->next ;
            curr->next = prev ;
            prev = curr ; 
            curr = forw ;
            count++;
        }
        if(count<k){
            return  reverseKGroup(prev,count);
        }
        if(forw!=nullptr){
            head->next = reverseKGroup(forw,k);
        }
        return prev ; 
    }
};