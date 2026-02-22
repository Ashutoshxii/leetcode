class Solution {
public:
    int binaryGap(int n) {
        int prev = -1 ; 
        int ans = 0 ; 
        int count = 0 ; 
        while(n>0){
            if(n&1){
                if(prev!=-1){
                    ans = max(ans,count-prev) ;
                }
                prev = count ; 
            }
            count++ ; 
            n = n>>1 ;
        }
        return ans ; 
    }
};