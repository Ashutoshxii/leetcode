class Solution {
public:
    int mySqrt(int x) {
        
        int left = 1 ; 
        int right = x ;
        int mid = (right-left)/2 + left ; 
        int ans = 0 ; 

        while(left<=right){
            mid = (right-left)/2 + left ; 
            long long sq = (long long)mid*mid   ;
            if(sq == x){
                return mid ; 
            }
            else if(sq<x){
                left = mid + 1 ; 
                ans = mid ; 
            }
            else{
                right = mid- 1  ; 
                // ans = mid ; 
            }
        } 
        return ans ; 
    }
};