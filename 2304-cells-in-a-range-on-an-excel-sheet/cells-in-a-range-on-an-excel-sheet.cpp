class Solution {
public:
    vector<string> cellsInRange(string s) {
        int  c1 = s[0] - 'a';
        int  r1 = s[1] -'0'; 
        int  c2 = s[3] -'a';
        int  r2 = s[4] -'0';
        vector<string> vec ; 

        for(int i = c1 ; i <= c2 ;i++){
            for(int j = r1 ; j <= r2 ;j++){
                string st = "" ; 
                st+= (i+'a'); 
                st+=(j+'0') ; 
                vec.push_back(st) ;
            }
        }
        return vec ; 
    }
};