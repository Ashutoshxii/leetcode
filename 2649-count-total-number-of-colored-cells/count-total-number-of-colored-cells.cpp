class Solution {
public:
    long long coloredCells(int n) {
        long long sum = 1 ; 
        int i = 1 ; 

        while(i < n){
            sum = sum + 4*i ; 
            i++ ; 
        }
        return sum  ;
    }
};