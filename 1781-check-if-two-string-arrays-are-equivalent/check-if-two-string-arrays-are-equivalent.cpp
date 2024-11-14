class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "";
        for(int i = 0 ; i < word1.size() ; i++ ){
            int j = 0 ; 
            while(j<word1[i].size()){
                s1+=word1[i][j]; 
                j++ ; 
            }
        }
        string s2 = "";
        for(int i = 0 ; i < word2.size() ; i++ ){
            int j = 0 ; 
            while(j<word2[i].size()){
                s2+=word2[i][j]; 
                j++ ; 
            }
        }
        return (s1==s2) ; 
    }
};