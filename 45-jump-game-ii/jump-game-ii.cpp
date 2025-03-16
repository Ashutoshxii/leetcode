class Solution {
public:
    int solve(vector<int>&nums , int index , vector<int> &dp){
        if(index>=nums.size()-1){
            return 0 ; 
        }
        if(dp[index]!=-1){
            return dp[index] ; 
        }
        int mini = INT_MAX-1 ; 
        for(int i = index +1 ; i < nums.size() && i<= index+nums[index] ; i++){
            mini =  min(mini , 1+solve(nums, i , dp));

        }

        return dp[index] = mini ; 

    }
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size()+1 , INT_MAX-1) ; 

        dp[0] = 0 ; 

        for(int i = 0 ; i < nums.size() ;i++){
            for(int j = i+1 ;  j < nums.size()&&j<=i+nums[i] ;j++){
                dp[j] = min( dp[j] , dp[i] + 1 ) ; 
            }
        }
        return dp[nums.size()-1] ;
    }
};