class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>vec(amount + 1 , INT_MAX) ;
        vec[0] = 0 ; 
        for(int i = 0 ; i <= amount ; i++){
            for(int j = 0 ; j < coins.size() ; j++){
                
                if(i>= coins[j]){
                    // amount = 
                    if(vec[i-coins[j]]!=INT_MAX)
                    {vec[i]  = min(vec[i] , vec[i-coins[j]]+1) ;}
                }
            }
        }
        return(vec[amount]==INT_MAX)? -1 : vec[amount] ; 
    }
};