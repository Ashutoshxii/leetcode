class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string st ="" ;

        for(int i = 0 ; i < words.size() ; i++){

            int j = 0 ; 
            int k = words[i].length() -1 ; 
            bool ist = 1 ; 
            while(j<k){
                if(words[i][j]!=words[i][k]){
                    ist = 0 ; 
                    break ; 
                }
                else{
                    j++ ; 
                    k-- ;
                    
                }
            }
            if(ist){
                st = words[i];
                break ;
            }
        }
        return st ; 

    }
};