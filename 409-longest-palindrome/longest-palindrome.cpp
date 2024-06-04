class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char , int > mp  ;
        for(char c : s){
            mp[c]++ ;
        }
        int length = 0 ; 
        int odd = 0 ;
        for(auto [c , freq] : mp){
            if(freq%2==0){
                length+=freq ; 
            }
            else{
                length+=freq-1 ;
                odd++ ; 
            }
        }
        if(odd>0){
            length++ ;
        }
        return length ; 
    }
};