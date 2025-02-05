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
    int gcd (int a , int b){
       
       while(a!=0){
        int temp = a ;
        a = b%a ;
        b = temp ; 
       }  
       return b ;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head->next){
            return head ;
        }

        // int temp = head ; 
        ListNode* first = head ;
        ListNode* second = head->next ; 

        while(second!=NULL){
            int k = gcd(first->val,second->val) ;
            ListNode *gc = new ListNode() ; 
            gc->val = k ;
            gc->next = second ; 
            first->next = gc ; 

            first= gc->next ;
            second = second->next ; 
        }
        return head ; 
    }
};