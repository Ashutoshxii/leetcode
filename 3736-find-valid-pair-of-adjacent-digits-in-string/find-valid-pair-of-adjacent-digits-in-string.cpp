class Solution {
public:
    string findValidPair(string s) {
        vector<int>vec(10 , 0) ;
        for(char ch : s){
            vec[ch-'0']++ ;
        }
        string  ans="" ;

        for(int i = 0 ; i < s.size()-1 ;i++){
            if(s[i]!=s[i+1]&&vec[s[i]-'0']==s[i]-'0'&&vec[s[i+1]-'0']==s[i+1]-'0'){
                ans+=s[i];
                ans+=s[i+1] ;
                return ans ;
            }
        }
        return ans ; 


    }
};