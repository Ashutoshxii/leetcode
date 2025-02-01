class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        //first crate the morse code in vector of string 
        //create a unordered map 
        //start a loop and fiil it t
        ///then just count 
        vector<string>vec( words.size() , "") ;

        vector<string>morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."} ; 

        unordered_map<string,bool> mpp ; 
        int count = 0 ; 
        for(int i = 0 ; i < words.size() ; i++){
            string st ="" ; 
            for(int j = 0 ; j < words[i].length() ; j++){
                int ind = words[i][j] - 'a' ;
                st+=morse[ind] ; 
            }
            if(!mpp[st]){
                mpp[st] = 1;
                count++ ; 
            }
            

        } 
        return count ; 

        
    }
};