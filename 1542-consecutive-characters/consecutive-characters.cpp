class Solution {
public:
    int maxPower(string s) {
        int count = 1 ; 
        int maxi = 1 ; 
        for(int i = 0 ; i < s.size()-1 ; i++){
            if(s[i] == s[i+1]){
                count++ ;
                maxi = max(maxi ,count );
            }
            else {
                count = 1 ;
             }
        }
        // if (maxi == 1)return 0 ; 
        return maxi ; 
    }
};