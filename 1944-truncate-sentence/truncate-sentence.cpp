class Solution {
public:
    string truncateSentence(string s, int k) {
        int i = 0 ; 
        string st = "" ; 
        while(k--){
            while(i<s.size() && s[i]!=' '){
                st+=s[i] ;
                i++ ; 
            }

            if(k>0)st+=s[i] ;
            i++;
        
        }
        return st; 
    }
};