class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int>v(10,0) ;
        while(n>0){
            v[n%10]++ ;
            n/=10 ; 
        }
        int total = 0 ; 
        for(int i = 1 ; i <= 9 ;i++){
            total+= (v[i]*i); 
        }
        return total ; 
    }
};