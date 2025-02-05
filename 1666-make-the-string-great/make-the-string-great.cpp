class Solution {
public:
    string makeGood(string s) {
        stack<char> st ; 

        
        for(char i : s){
            
            if(st.empty()){
                st.push(i);
            }
            else if(st.top()-'a'==i-'A'||st.top()-'A'==i-'a'){
                    st.pop() ;
            }
            else{
                st.push(i);
            }
            
                    
        
            
            
        }
        string s1 ="" ;
        while(!st.empty()){
            s1 = st.top()+s1 ; 
            st.pop() ;
        }
        return s1 ; 

    }
};