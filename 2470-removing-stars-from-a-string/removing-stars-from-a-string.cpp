class Solution {
public:
    string removeStars(string s) {
        stack<char> st ; 
        for(char i : s){
            if(i=='*'){
                st.pop();

            }
            else{
                st.push(i);
            }
        }
        string ans ;
        while(!st.empty()){
            char r = st.top() ; 
            ans+=r ;
            st.pop() ; 
        }
        reverse(ans.begin(),ans.end()) ;
        return ans ;
    }
};