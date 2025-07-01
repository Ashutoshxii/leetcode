class Solution {
public:
    int possibleStringCount(string word) {
        int count = 0 ; 
        int i = 0 ; 
        int size = word.size() ; 
        while( i < size - 1 ){
            if(word[i]==word[i+1]){
                count++ ; 
            }
            i++ ;
        }
        return count+1 ; 
    }
};