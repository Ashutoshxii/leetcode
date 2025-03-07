class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        
        vector<bool> primer(right + 1  , true) ;
        primer[0] = primer[1] = false ; 

        for(int i = 2 ; i*i <= right ; i++){
            if(primer[i]){
                for(int j = i*i ; j <= right ; j = j+i){
                    primer[j] = false ; 
                }
            }
        } 
        vector<int> primes ;
        for(int i = left ; i  <= right ; i++){
            if(primer[i]){
                primes.push_back(i) ; 
            }
        }
        int diff = INT_MAX ; 
        int a = -1 ; 
        int b = -1 ; 
        for(int i = primes.size()-1; i > 0 ; i--){
            if(primes[i] - primes[i-1] <= diff){
                a = primes[i-1] ;
                b = primes[i] ;
                diff = primes[i] - primes[i-1] ; 
            }
        }
        vector<int> ans ; 
        ans.push_back(a) ; 
        ans.push_back(b) ;
        return ans ;  
    }
};