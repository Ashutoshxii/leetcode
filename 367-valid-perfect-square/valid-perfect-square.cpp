class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)return true ;
        if(num<4)return false  ; 
        int s = 1 ; 
        int end = num / 2 ; 
        long long  mid = (s+end)/2 ;
        while(s<=end){
            mid = (s+end)/2 ;

            if(mid*mid==num)return true ;
            else if (mid*mid>num)end = mid-1 ;
            else s = mid+1 ; 
        }
        return false; 
    }
};