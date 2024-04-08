class Solution {
public:
    int reverse(int x) {
        if(x>INT_MAX||x<INT_MIN){
            return false ; 
        }
        bool n = false ; 
        long long num = x ; 
        if(num<0){
            num = num * -1 ; 
            n = true ; 
        }
        long long fin = 0 ; 
        int count = 0 ; 
        while(num>0){
            fin = fin * 10 + num%10 ; 
            if(fin>INT_MAX){
                return false ; 
            }
            num = num/10 ; 
            count ++ ; 
        }
        if (n){
            fin = fin*-1 ; 
        }
        return fin ; 
    }
};