class Solution {
public:
    bool isPalindromic(string s) {
        string st = "" ; 
        for(char ch : s){
            int x = ch ; 
            string st1 = bitset<8>(x).to_string() ; 
            st+= st1 ; 
        }
        int i = 0 ; int j = st.size()-1 ; 
        while(i < j){
            if(st[i]!=st[j])return 0 ; 
            i++ ; j-- ; 
        }
        return true ;
    }
};