class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>ans ; 
        int n = s.size() ; 
        for(int i = 0 ; i < n-1 ;i++){
            int count = 1 ;
            while(i < n-1 && s[i]==s[i+1]){
                count++ ; 
                i++ ; 
            }
            if(count>2){
                ans.push_back({i-count+1,i}) ; 
            }
        }
        return ans ; 
    }
};