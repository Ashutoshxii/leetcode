class Solution {
public:
    int numberOfSpecialChars(string word) {
        int c = 0 ; 
         
        map<char,int> mpp ;
        
        
        sort(word.begin(),word.end())  ; 
        int i = 0 ;
        int j = word.length() ;
        while(i<j){
            if(word[i] >='A' && word[i]<='Z'){
                  mpp[word[i]]++ ;
                
            }
            else{
                if(mpp[word[i]+'A'-'a']>=1){
                                    mpp[word[i]+'A'-'a']=0; 

                    c++ ; 
                }
            }
            i++ ; 
        }
        return c; 
    }
};