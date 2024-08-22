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
    int pairSum(ListNode* head) {
        stack<int> st ;
        ListNode*temp = head ; 
        int count = 0 ; 
        while(temp!=NULL){
            st.push(temp->val);
            temp = temp -> next ;
            count++ ; 
        }
        count /= 2 ;
        temp = head ; 
        int maxi = INT_MIN ; 
        while(count>0){
            int sum = st.top() + temp->val;
            st.pop() ; 
            temp = temp->next ; 
            maxi = max(maxi , sum );
            count--;
        }
        return maxi ; 
    }
};