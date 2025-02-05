class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count = 0 ;

        vector<int> vec (26,0) ;
        for(int i = 0 ; i < s1.length() ; i++){
            int k = s1[i] -'a' ;
            vec[k]++ ; 
        }
        for(int i = 0 ; i < s2.length() ; i++){
            int k = s2[i] -'a' ;
            vec[k]-- ; 
        }
        for(int i : vec){
            if(i!=0){
                return false ; 
            }
        }

        for(int i = 0 ; i < s1.length() ;i++){
            if(s1[i]!=s2[i]){
                count++ ;
            }
        }
        if(count>2)return false  ;
        return true ; 
    }
};