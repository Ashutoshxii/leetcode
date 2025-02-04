class Solution {
public:
    int myAtoi(string s) {
        
        int i  = 0 ; 
        int n = s.size() ;
        while(i<n&&s[i]==' '){
            i++;
        }
        int j = 1 ;
        if(s[i]=='-'||s[i]=='+'){
            if(s[i]=='-')j=-1 ; 
            i++;
        }
        int ans = 0 ; 
        while(i<n){
            int digit = s[i] - '0' ;
            if(isdigit(s[i])){
                if(ans > (INT_MAX- digit)/10){
                    if(j ==-1){
                        return INT_MIN ;
                    }
                    else{
                        return INT_MAX ; 
                    }
                }
            }
            else{
                break ; 
            }
            ans = (ans*10) + digit ; 
            i++;
        }
        if(j==-1){
            return -ans ;
        }
        return ans ; 
    }
};