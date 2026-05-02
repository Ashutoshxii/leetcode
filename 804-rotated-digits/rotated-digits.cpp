class Solution {
public:
    bool good(int n ){
        int k = n ; 
        bool invalid = false ; bool change = false ; 
        int count = 0 ; 
        int newy = 0 ; 
        while(k > 0 ){
            count++ ; 
            int x = k%10 ; 
            k = k/10 ; 
            if(x==3||x==4||x==7)return false ; 
            if(x==0||x==1||x==8)continue ; 
            else{
                change = 1 ;
            }
        }
        return change ; 

    }
    int rotatedDigits(int n) {
        int count = 0 ; 
        for(int i = 1 ; i <= n ;i++){
            if(good(i))count++ ; 
        }
        return count ; 
        
    }
};