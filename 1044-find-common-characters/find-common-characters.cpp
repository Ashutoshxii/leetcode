class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> global(26,INT_MAX) ;

        for(auto & word : words){
            vector<int> local (26 , 0) ; 
            for(int i = 0 ; i < word.length()  ; i++){
                local[word[i] - 'a']++ ;
            }
            for(int i = 0 ; i < 26 ; i++){
                global[i] = min(global[i],local[i]);
            }
        } 
        vector<string> ans  ; 
        for(int i = 0 ; i < 26 ; i++){
            while(global[i]>0){
                ans.push_back(string(1, i + 'a')) ;
                global[i]--;
            }
        }
        return ans ;

    }
};