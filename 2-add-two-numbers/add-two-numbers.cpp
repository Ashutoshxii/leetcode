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
    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr ;
        ListNode* curr = head ;
        ListNode* next = nullptr ; 
        while(curr!=nullptr){
            next = curr->next ; 
            curr->next = prev ; 
            prev = curr ;
            curr = next ; 
        }
        return prev;
    }
    void insert(ListNode* &ansHead , ListNode* &ansTail , int digit){
        ListNode * temp = new ListNode(digit);
        if(ansHead==nullptr){
            ansHead = temp ;
            ansTail = temp ; 
        }
        else{
            // ansTail = temp ;
            // ansTail = temp->next ;
            ansTail->next = temp ;
            ansTail = temp ; 
        }
    
    }
    ListNode* solve(ListNode* &l1, ListNode* &l2){
       
        
        
        int carry = 0 ;
       
        ListNode *ansHead = nullptr ; 
        ListNode * ansTail= nullptr ; 
        while(l1!=nullptr||l2!=nullptr||carry!=0){
            int val1 = 0 ;
            if(l1!=nullptr){
                 val1 = l1->val ;
            }
            int val2 = 0 ; 
            if(l2!=nullptr){
                    val2 = l2->val ; 
            }
            int sum  = val1+val2+carry ;
            int digit = sum%10;
            carry = sum/10;
            insert(ansHead,ansTail,digit);
            if(l1!=nullptr){
                l1 = l1->next ;
            }
            if(l2!=nullptr){
                l2 = l2->next ;
            }
           
        }
        return ansHead ;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==nullptr){
            return l2;
        }
        if(l2==nullptr){
            return l1 ; 
        }
        ListNode*ans = nullptr ; 
        if(l1->val > l2->val){
            ans = solve(l1,l2);
        }
        else{
            ans = solve(l2,l1);
        }
        
        return ans ; 
    }
};