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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode* , int> mpp ;
        ListNode*temp1 = headA ;
        ListNode*temp2 = headB ;
        while(temp1!=NULL&&temp2!=NULL){
            if(mpp[temp1]>0){
                return temp1 ;
            }
            mpp[temp1]++ ;
            temp1 = temp1->next ; 
            if(mpp[temp2]>0){
                return temp2 ;
            }
            mpp[temp2]++ ; 
            temp2 = temp2->next ; 
        }
        while(temp1!=NULL){
            if(mpp[temp1]>0){
                return temp1 ;
            }
            mpp[temp1]++ ;
            temp1 = temp1->next ; 
        }
        while(temp2!=NULL){ 
            if(mpp[temp2]>0){
                return temp2 ;
            }
            mpp[temp2]++ ; 
            temp2 = temp2->next ; 
        }
        return NULL ; 

    }
};