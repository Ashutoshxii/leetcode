class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int c = 0  ; int r = 0 ; int l = 0 ; 
        for(auto &i : moves){
            if(i=='L')l++ ;
            else if(i=='R')r++ ;
            else c++ ; 
        }
        return abs(l-r) + c ; 
    }
};