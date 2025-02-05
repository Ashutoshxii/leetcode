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
    int getDecimalValue(ListNode* head) {
        int k = 0 ; 
        ListNode*temp = head ; 
        vector<int> vec ;
        while(temp){
            vec.push_back(temp->val) ; 
            temp = temp->next ; 
        }
        int n = vec.size()-1 ; 

        for(int i = 0 ; i < vec.size() ; i++){
            k+= pow(2,n--)*vec[i] ;
        }
        return k ;
    }
};