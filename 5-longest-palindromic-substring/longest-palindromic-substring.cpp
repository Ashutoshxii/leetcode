class Solution {
public:
    string solve(int i,int j , string&s){
        // int count = 0 ; 
        while(i>=0&&j<s.size()&&s[i]==s[j]){
            i-- ; 
            j++ ;
            // count++ ; 
        }
        // if(count ==0) return "" ; 
        return s.substr(i+1,j-i-1) ; 
    }
    string longestPalindrome(string s) {
        string ans = "" ; 
        for(int i = 0 ; i < s.size() ;i++){
            string s1 = solve(i,i,s) ; 
            string s2 = solve(i,i+1,s) ; 
            if(s1.size()>ans.size()){
                ans = s1 ;
            }
            if(s2.size()>ans.size()){
                ans = s2 ; 
            }
        }
        return ans ; 
    }
};