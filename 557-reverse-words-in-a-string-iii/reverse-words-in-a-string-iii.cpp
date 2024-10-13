class Solution {
public:
    string reverseWords(string s) {
        int n = s.size() ;
        string st = "" ;
        for(int i = n -1 ; i >= 0 ; i--){
            string st1 = "" ;
            while (i >= 0 && s[i]!=' '){
                st1.push_back(s[i]) ;
                i-- ; 
            }
            reverse(st1.begin(),st1.end()) ;
            st.append(st1) ;
               if (i >= 0 && s[i] == ' ') {
            st.push_back(' ');
        }

        }
        reverse(st.begin(),st.end());
        return st  ; 
    }
};