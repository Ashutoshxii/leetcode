class Solution {
public:
    bool isNumber(string s) {
        bool e = false ;
        bool dot = false ;
        bool  sign = false ; 
        bool num = false ; 
        int k = s.length() ; 
        for(int i = 0 ; i< k ; i++){
            if(s[i]<='9'&&s[i]>='0' ){
                num = true ; 
                sign = false;
            }
            else if(s[i]=='.'){
                if(e||dot  ){
                    return false ; 
                }
                dot = true ; 
                
            }
            else if(s[i]=='e'||s[i]=='E'){
                if(e||!num){
                    return false ;
                }
                e= true ; 
                num = false ; 
                dot = false;
                sign = false;
            }
            else if (s[i] == '+' || s[i] == '-') {
                if (i > 0 && s[i - 1] != 'e' && s[i - 1] != 'E') {
                    return false;
                }
                if (sign && s[i - 1] != 'e' && s[i - 1] != 'E') {
                    return false;
                }
                sign = true;
                num = false;
            }
            else{
                return false ; 
            }
        }
        return num ; 

    }
};