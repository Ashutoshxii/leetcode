class Solution {
public:
    string getEncryptedString(string s, int k) {
        
        string st = s ;
        int n = s.size() ; 
        for(int i = 0 ; i < n ; i++){
            st[i] = s[(i+k)%n] ;
        }
        return st; 
    }
};