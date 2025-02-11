class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> vec (26,0) ;

        for(char a : magazine){
            vec[a-'a']++  ; 
        }
        for(char b : ransomNote){
            if(vec[b-'a']==0){
                return false ; 
            }
            else{
                vec[b-'a']-- ;
            }
        }
        return true ; 
    }
};