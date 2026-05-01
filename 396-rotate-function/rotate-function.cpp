class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size() ; 
        // int maxi = INT_MIN ; 
        int sum = 0 ; 
        int f = 0 ; 
        int ans ; 
        for(int i = 0 ; i < n ; i++){
            sum += nums[i] ; 
            f += i*nums[i] ; 
        }
        ans = f ; 
        for(int i = 1 ; i < n ;i++){
            f = f + sum-n*nums[n-i] ; 
            ans = max(ans,f) ; 
        }
        // return maxi ; 
        return ans ; 
    }
};