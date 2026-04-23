class Solution {
public:
    int sumer(string st){
        string x = "" ; 
        for(char &i: st){
            x+= i-'a'+'0' ;  
        }
        return stoi(x) ; 

    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return sumer(firstWord) + sumer(secondWord) == sumer(targetWord) ; 
    }
};