class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ; 
        int n = nums.size() - 1;
        int op1 = nums[0]*nums[1]*nums[n] ; 
        int op2 = nums[n-2]*nums[n-1]*nums[n] ;
        return max(op1,op2) ;  
    }
};