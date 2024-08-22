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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> vec1  ; 
        vector<int> vec2  ; 
        ListNode*temp = head ;
        while(temp!=NULL){
            vec1.push_back(temp->val) ; 
            temp = temp->next ; 
            if(temp!=NULL){
                vec2.push_back(temp->val) ; 
                temp = temp->next ; 
            }
        }
        temp = head ; 
        int i = 0 ;
        int j = 0 ; 
        while(i<vec1.size()){
              
            temp->val = vec1[i] ;
            temp = temp->next ; 
            i++ ;  
            
        }
        while(j<vec2.size()){
              
            temp->val = vec2[j] ;
            temp = temp->next ; 
            j++ ;  
            
        }
        return head ; 
    }
};