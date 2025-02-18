class Solution {
public:
    // int solve(vector<int>&nums , int target , vector<int>&dp){
    //     if(target<0)return 0 ;
    //     if(target==0) return 1 ;
        
    //     if(dp[target]!= -1){
    //         return dp[target] ; 
    //     }
    //     int ans = 0 ;

    //     for(int i = 0 ; i < nums.size() ;i++){
    //         ans+= solve(nums , target - nums[i] , dp);
    //     }
    //     return dp[target] = ans ; 
    // }
   
       int combinationSum4(vector<int>& nums, int target) {
        const int LIMIT = INT_MAX;  // maximum allowed value
        vector<long long> dp(target + 1, 0);
        dp[0] = 1;

        for (int j = 1; j <= target; j++) {
            long long ans = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (j - nums[i] >= 0) {
                    ans += dp[j - nums[i]];
                    if (ans >= LIMIT) {  // if we exceed INT_MAX, clamp and break out
                        ans = LIMIT;
                        break;
                    }
                }
            }
            dp[j] = ans;
        }

        return dp[target] >= LIMIT ? LIMIT : dp[target];
    }
    
};