class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans = "" ;
        stack<int>st ; 
        
        for(char ch:num){
            int x =  ch -'0'  ;
            if(st.empty()){
                st.push(x) ; 
            }
            else{
                while(!st.empty() && k > 0 && st.top() > x){
                    st.pop() ; k-- ; 
                }
                st.push(x) ; 
            }
        }
        while(k--&&!st.empty()){
            st.pop() ; 
        }
        while(!st.empty()){
            ans+= st.top()+'0' ; st.pop() ; 
        }
        reverse(ans.begin(),ans.end()) ; 
        int i = 0 ; 
        while(ans[i]=='0')i++ ; 
        ans = ans.substr(i) ; 
        return ans.empty() ? "0" : ans ;
    }
};