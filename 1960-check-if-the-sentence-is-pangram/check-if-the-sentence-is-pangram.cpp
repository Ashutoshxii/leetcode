class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,bool>mpp ; 

        for(int i = 0 ; i < sentence.size() ; i++){
            mpp[sentence[i]] = 1 ; 
        }

        for(int i = 0 ; i< 26 ;i++){
            char ch = i+'a' ;
            if(!mpp[ch])return false ;   

        }
        return true ; 
    }
};