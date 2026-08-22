class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0 ; 
        int pro = 1 ; 
        int x = n ; 
        while(x>0){
            sum+= x%10 ; x/=10 ; 
        }
        x = n ; 
        while(x>0){
            pro *= x%10 ; x/=10 ; 
        }
        return (n%(sum+pro)==0)?1:0 ; 
    }
};