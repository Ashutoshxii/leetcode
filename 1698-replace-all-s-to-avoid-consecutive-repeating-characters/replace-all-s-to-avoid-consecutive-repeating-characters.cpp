class Solution {
public:
    string modifyString(string s) {
        int n = s.size() ; 
        for(int i = 1 ; i < s.size()-1 ; i++){
            if(s[i]=='?'){
                int f = s[i-1] - 'a' ;
                int l = s[i+1] -'a' ;
                for(int j = 0 ;  j < 26 ; j++){
                    if(j!= f && j!= l){
                        s[i] = j + 'a' ; 
                        break ; 
                    }
                }
            }
        }
        if(s[0]=='?'){
          
                int l = s[1] -'a' ;
            for(int j = 0 ;  j < 26 ; j++){
                    if(   j!= l){
                        s[0] = j + 'a' ; 
                        break ; 
                    }
                }
        }
        if(s[n-1]=='?'){
            int f = s[n-2] - 'a' ;
               
                for(int j = 0 ;  j < 26 ; j++){
                    if(j!= f  ){
                        s[n-1] = j + 'a' ; 
                        break ; 
                    }
                }
        }
        return s ; 
    }
};