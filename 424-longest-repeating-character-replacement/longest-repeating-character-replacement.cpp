class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size() ; 
        int ans = 0 ; 
        int left = 0 ; 
        vector<int>track(26,0) ; 
        int maxF = 0 ; 
        for(int right = 0 ; right < n ;right++){
            track[s[right]-'A']++ ; 
            maxF = max(maxF,track[s[right]-'A']) ; 
            while((right-left+1)-maxF > k){
                track[s[left]-'A']-- ; 
                left++ ; 
            }
            ans = max(ans , (right-left+1)) ; 
        }
        return ans ;
    }
};