class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char>st ; 
        vector<bool>visited(26,0) ; 
        vector<int>last(26,INT_MAX) ; 
        for(int i = 0 ; i < s.size() ; i++){
            last[s[i]-'a'] = i ; 
        }

        for(int i = 0 ; i < s.size() ;i++){
            char ch = s[i] ; 
            if(visited[ch-'a'])continue ; 
            while(!st.empty()&&st.top()>ch&&last[st.top()-'a']>i){
                visited[st.top()-'a'] = 0 ; 
                st.pop() ; 

            }
            st.push(ch) ; 
            visited[ch-'a'] = 1 ; 
        }
        string ans = "" ; 
        while(!st.empty()){
            ans+= st.top() ; 
            st.pop() ; 
        }
        reverse(ans.begin(),ans.end()) ; 
        return ans ; 
    }
};