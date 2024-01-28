class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return 0 ; 
        }
        int k1[26] = {0};
        int k2[26] = {0};

        int i = 0 ; 
        int j = 0 ; 
        while(i < s.size()){
            int ind = s[i] - 'a' ;
            k1[ind]++ ;
            i++ ;
        }
        i = 0 ; 
        while(i < t.size()){
            int ind = t[i] - 'a' ;
            k2[ind]++ ;
            i++ ;
        }
    
        for(i = 0 ; i < 26;i++){
            if(k1[i]!=k2[i]){
                return false ; 
            }
        }
        return true ; 
    }
};