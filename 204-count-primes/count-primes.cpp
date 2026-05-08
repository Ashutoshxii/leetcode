class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)return 0 ; 
        vector<bool>compo(n,false) ; 
        compo[0] = compo[1] = 1 ;
        for(int i = 2 ; i * i < n ;i++){
            if(!compo[i]){
                for(int j = i*i ; j < n ; j+= i ){
                    compo[j] = 1 ; 
                }
            }
        }
        int ans = 0 ; 
        for(bool i : compo){
            if(!i)ans++ ; 
        }
        return ans ; 
    }
};