class Solution {
public:
    int maxDifference(string s) {
        vector<char>vec(26,0) ; 
        for(char i : s ){
            vec[i-'a']++ ;
        }

        int oddma = INT_MIN ;
        int oddmi = INT_MAX ;
        int evenmi =INT_MAX ;
        int evenma = INT_MIN ;

        for(int i : vec){
            if(i>0){
                if(i%2){
                oddma = max(oddma,i);
                oddmi = min(oddmi,i) ;
            }
            else{
                evenma = max(evenma,i);
                evenmi = min(evenmi , i) ;
            }
            }
        }
        return (oddma-evenmi);
    }
};