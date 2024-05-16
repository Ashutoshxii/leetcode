class Solution {
public:
    string largestOddNumber(string num) {
        int size = num.size() ; 
        
        string st = "" ; 
        
        for(int i = size-1 ; i>=0 ; i--){
            int k = num[i]-'0' ;
            if(k&2!=0){
                st = num.substr(0,i+1) ; 
                return st ; 
            }
        }
        return st ;
        

    }
};