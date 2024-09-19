class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int> mpp1 ;
        unordered_map<char,int> mpp2 ;
        for(int i = 0 ; i < s.size() ; i++){
            mpp1[s[i]] = i  ; 
        }
        for(int i = 0 ; i < s.size() ; i++){
            mpp2[t[i]] = i  ; 
        }
         
        int ans = 0  ; 
        for(int i = 0 ; i < s.size() ; i++){
            ans += abs(mpp1[s[i]] - mpp2[s[i]]) ; 
        }
        return ans ; 

    }
};