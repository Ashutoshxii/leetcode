class Solution {
public:
    string clearDigits(string s) {
        stack<char> st ; 

        for(char i : s){
            if(i>='0'&&i<='9'&&!st.empty()){
                st.pop() ;
            }else if(i>='a'&&i<='z'){
                st.push(i);
            }
        }
        string str = "" ;

        while(!st.empty()){
            char ch = st.top() ;
            st.pop() ;
            str = ch + str ;

        }
        return str; 
    }
};