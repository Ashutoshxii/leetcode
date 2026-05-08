class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int row = matrix.size() ; int col = matrix[0].size() ; 
        vector<vector<int>>dp(row+1,vector<int>(col+1,0)) ; 
        int maxi = 0 ; 
        for(int i = row-1 ; i >= 0 ;i--){
            for(int j = col-1 ; j>=0 ;j--){
                if(matrix[i][j]=='0')continue ; 
                int right = dp[i][j+1] ; 
                int down = dp[i+1][j] ; 
                int dia = dp[i+1][j+1] ; 
                dp[i][j] = min(right,min(down,dia)) +1 ;
                maxi = max(dp[i][j],maxi) ; 
            }
        }
        return maxi*maxi ; 
    }
};