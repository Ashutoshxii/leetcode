class Solution {
public:
    int minOperations(int n) {
        if(n%2==0){
            return n/2*n/2 ; 
        }
        n = (n)/2 ; 
        return n*(n+1) ; 
    }
};