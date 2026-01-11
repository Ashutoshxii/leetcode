class Solution {
public:
    string largestEven(string s) {
        int n = s.size()-1; 
        int i =  n ;
        while(i>=0&&s[i]=='1'){
            i-- ; 
        }
        if(i<0)return "" ;
        return    s.substr(0,i+1) ; 

    }
};