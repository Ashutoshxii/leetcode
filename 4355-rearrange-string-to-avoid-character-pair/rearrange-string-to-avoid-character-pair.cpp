class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string xx = "" ; 
        string yy = "" ; 
        string st = "" ; 
        for(char ch:s){
            if(ch == x)xx+=x ;
            else if(ch == y)yy+=y ; 
            else st+= ch ; 
        }
        st = yy + st + xx ; 
        return st ;
    }
};