class Solution {
public:
    bool checkString(string s) {
        int b = false  ; 
        for(char i : s){
            if(i=='b')b =true ;
            else if(i=='a'&&b){
                return false ; 
            }
        }
        return true ; 
    }
};