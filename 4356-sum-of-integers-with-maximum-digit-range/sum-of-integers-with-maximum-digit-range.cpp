class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int ans = 0 ; 
        int maxi = 0 ; 

        for(auto&i:nums){
            int small = 9 ; 
            int big = 0 ;
            int x = i ;
            while(x > 0){
                int k = x%10 ; 
                x /= 10 ; 
                small = min(small,k) ; 
                big = max(big,k) ; 
            } 
            int diff = big - small  ; 
            if(diff>maxi){
                maxi = diff ; 
                ans = i ; 
            }
            else if(diff==maxi){
                ans+= i ; 
            }
        }
        return ans ; 
    }
};