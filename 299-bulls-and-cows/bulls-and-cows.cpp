class Solution {
public:
    string getHint(string secret, string guess) {
        string st = "" ;

        vector<int> sec (10 , 0) ; 
        vector<int> gue (10 , 0) ; 
        int bull = 0 ; 
        for(int i = 0 ; i < secret.size() ; i++){
            if(secret[i]==guess[i])bull++ ; 
            else{
                sec[secret[i]-'0']++ ; 
                gue[guess[i]-'0']++ ; 

            }            
        }
        int cow = 0 ; 
        for(int i = 0 ; i <10 ;i++){
            int k = min(sec[i] , gue[i]) ;
            cow+=k ; 
        }
        st+= to_string(bull);
        st+='A' ;
        st+= to_string(cow) ;
        st+= 'B';
        return st ;
    }
 };