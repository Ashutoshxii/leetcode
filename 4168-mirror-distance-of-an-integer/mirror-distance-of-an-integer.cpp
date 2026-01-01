class Solution {
public:
    int mirrorDistance(int n) {
        int rev = 0 ; 
        int x = n ; 
        while(x>0){
            rev*=10 ; 
            rev+= x%10 ; 
            x/=10 ; 
        }
        return abs(n-rev) ; 
    }
};