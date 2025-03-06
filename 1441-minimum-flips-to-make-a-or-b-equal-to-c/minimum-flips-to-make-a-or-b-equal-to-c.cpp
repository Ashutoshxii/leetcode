class Solution {
public:
    int minFlips(int a, int b, int c) {
        int d = a | b ; 
        
        int count = 0 ; 

        int num = c  ; 
        // int num1 = 

        while(num||d){
            int f = num & 1 ;
            int s = d & 1 ;

            if(f && !s ){
                count++ ;
            }
            else if(!f &&s){
                int k = a & 1 ;
                int l = b&1 ;
                if(k&&l){
                    count+=2 ; 
                } 
                else{
                    count++ ;
                }
            }
            num = num>>1 ;
            a>>=1 ;
            b>>=1 ;  
            d>>=1 ; 
        }
        return count ; 
    }
};
