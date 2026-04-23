class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || s.size() < numRows)return s ; 
        vector<string>v(numRows) ; 
        int cR = 0 ;
        bool goingDown = 0 ;  
        for(char &ch:s){
            v[cR]+= ch ; 
            if(cR == 0 || cR == numRows-1){
                goingDown = !goingDown ; 
            }
            cR += goingDown ? 1 : -1 ; 
        }
        string ans = "" ; 
        for(string &st : v){
            ans += st  ; 
        }
        return ans ; 
    }
};