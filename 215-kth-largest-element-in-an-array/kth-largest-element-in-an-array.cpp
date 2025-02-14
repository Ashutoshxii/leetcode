class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pr(nums.begin(),nums.end());
        while(k>1){
            pr.pop()  ;
            k--;
        }
         
        return pr.top() ; 

    }
};