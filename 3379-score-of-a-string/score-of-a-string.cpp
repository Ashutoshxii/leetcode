class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0 ; 
        for(int i = 0 ; i< s.length()-1 ;i++){
            int k = abs(s[i] - s[i+1]) ;
            sum+=k ; 
        }
        return sum ; 
    }
};