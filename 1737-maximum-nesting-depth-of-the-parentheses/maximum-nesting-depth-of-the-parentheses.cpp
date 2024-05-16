class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0 ; 
        stack<int> st ;
        int count = 0 ; 
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]=='('){
                st.push('(') ;
                count++ ;
            }
            else if(s[i]==')'){
                st.pop() ;
                count-- ;
            }
            maxi = max(maxi,count) ;
        }
            return maxi; 
    }
};