class Solution {
public:
    string finalString(string s) {
        string st = "" ; 
        for(int i  = 0 ; i < s.size() ; i++){
            if(s[i]=='i'){
                reverse(st.begin(),st.end());
            }
            else{
                st+=s[i] ; 
            }
        }
        return st ; 
    }
};