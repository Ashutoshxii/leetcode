class Solution {
public:
    string reverseVowels(string s) {
        int j = s.size() - 1 ;
        int i = 0 ; 

        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        while(i<j){
            while(i<j&&vowels.find(s[i])==vowels.end()){
                i++ ; 
            }
            while(j>i&&vowels.find(s[j])==vowels.end()){
                j-- ; 
            }
            swap(s[i],s[j]);
            i++ ;
            j-- ; 
        }
        return s ;


    }
};