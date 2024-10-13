class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int> left(n)  ; 
        vector<int> right(n)  ;
        left[0] = 0 ; 
        int sum1 = 0 ; 
        for(int i = 1 ; i < nums.size() ; i++){
            sum1+=nums[i-1] ; 
            left[i] = sum1 ;  
        } 
        sum1 = 0  ; 
        right[n-1] = 0 ; 
        for(int i = n-2 ; i >= 0 ; i--){
            sum1+=nums[i+1] ; 
            right[i] = sum1 ;  
        } 
        vector<int> ans(n) ; 
        for(int i = 0 ; i < n ; i ++){
            ans[i] = abs(left[i]-right[i]) ;
        }
        return ans ;
    }
};