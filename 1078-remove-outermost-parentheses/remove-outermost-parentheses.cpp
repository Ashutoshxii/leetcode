class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "" ; 
        int balance = 0 ; 
        stack<char> st ; 
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]=='('){
                
                if(balance>0){
                    result+=s[i] ; 
                }
                // st.push(s[i]) ; 
                balance++ ; 
            }
            else{
                if(s[i]==')'){
                    balance-- ;
                    if(balance>0){
                        result+=s[i] ; 
                    }
                    // st.pop() ; 
                }
            }
        }
        return result ; 
    }
};