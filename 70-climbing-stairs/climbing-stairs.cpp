class Solution {
public:
    int solve(int n ,vector<int>&vec){
        if(vec[n]){
            return vec[n] ; 
        }
        return vec[n] = solve(n-1,vec) + solve(n-2,vec) ; 
    }
    int climbStairs(int n) {
        vector<int> vec (n+1,0) ;
        if(n==1){
            return 1 ; 
        }
        vec[0] = 0 ; 
        vec[1] = 1 ; 
        vec[2] = 2 ; 
        return solve(n,vec) ; 
    }
};