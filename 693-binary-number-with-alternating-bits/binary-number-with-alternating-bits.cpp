class Solution {
public:
    bool hasAlternatingBits(int n) {
        int alt = !(n&1) ;
     
        while(n>0){
            if((1&n)==alt)return false ; 
            n = n>>1 ;
            alt = !alt ; 
            
        }
        return true ;
   
    }
};