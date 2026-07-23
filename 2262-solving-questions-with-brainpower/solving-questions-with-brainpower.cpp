class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size() ; 
        vector<long long>dp(n+1,0);

        for(int i = n-1 ; i >= 0 ; i--){
            long long score = questions[i][0] ; 
            long long skip = questions[i][1] ; 
            long long take = score ; 

            if(i + skip + 1 <n){
                take += dp[i+skip+1] ; 
            } 
            long long untake = dp[i+1] ; 
            dp[i] = max(take,untake) ; 
        }
        return dp[0];
    }
};