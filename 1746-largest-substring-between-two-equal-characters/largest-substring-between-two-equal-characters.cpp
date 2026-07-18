class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<vector<int>>v(26) ; 
        for(int i = 0 ; i < s.size() ; i++){
            // v[s[i]-'a'].push_back(i) ; 
            if(v[s[i]-'a'].size()<=1){
                v[s[i]-'a'].push_back(i) ; 
            }
            else if(v[s[i]-'a'].size()>1){
                v[s[i]-'a'].pop_back() ; 
                v[s[i]-'a'].push_back(i) ; 
            }
        }
        int ans = -1 ; 
        for(auto i:v){
            int n = i.size();
            if(n<=1)continue ; 
            for(int j = 1 ; j < n ;j++){
                ans = max(ans , i[j] - i[j-1]-1) ; 
            }
        }
        return ans ; 
    }
};