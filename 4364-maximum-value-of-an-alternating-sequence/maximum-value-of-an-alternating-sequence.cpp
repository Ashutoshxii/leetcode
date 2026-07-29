class Solution {
public:
    long long maximumValue(int n, int s, int m) {                                      
        if(n==1)return s ; 
        long long ans = s ; 
        int x = n - 1 ; 
         
        int mm = x/2 ; 
        int oo = x/2 ; 
        if(x%2==1){
            mm++ ; 
        } 
        ans += (long long)m*mm - oo ; 
        return (n%2) ? ans+1 : ans ;

    }
};