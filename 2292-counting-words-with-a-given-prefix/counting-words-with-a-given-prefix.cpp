class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0 ; 
        for(int i = 0 ; i < words.size() ; i++){
            if(words[i].length()<pref.length()){
                continue ; 
            }
            else{
                bool ist = true ; 
                for(int j = 0 ; j < pref.length() ; j++){
                    if(words[i][j]!=pref[j]){
                        ist = false ; 
                        break ; 
                    }
                    else{
                        continue ;
                    }
                }
                if(ist)count++ ; 
            }
        }
        return count ; 
    }
};