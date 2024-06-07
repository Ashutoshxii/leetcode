class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0 ; 
        int j = 0 ;
        string st ;
        while(i < word1.length() && j < word2.length()){
            st+=word1[i];
            st+=word2[j];
            i++ ; 
            j++ ; 
        }
        while(i < word1.length() ){
            st+=word1[i];
             
            i++ ; 
            
        }
        while( j < word2.length()){
           
            st+=word2[j];
             
            j++ ; 
        }

        return st ; 
    }
};