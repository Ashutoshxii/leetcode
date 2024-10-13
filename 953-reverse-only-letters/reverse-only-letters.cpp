class Solution {
public:
    string reverseOnlyLetters(string s) {
        int j = s.size() ;
        
        int i = 0 ;
        while(i<j){
            while(i<j&&!isalpha(s[i])){
                i++ ;
            }
            while(i<j&&!isalpha(s[j])){
                j-- ;
            }
            if(isalpha(s[i])&&isalpha(s[j])){
                swap(s[i],s[j]);
                i++ ;
                j--;
            }
        }
        return s ;
    }
};