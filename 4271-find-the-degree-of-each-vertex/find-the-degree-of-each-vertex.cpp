class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>v ; 
        for(auto&i : matrix){
            int c = 0 ; 
            for(auto&j : i){
                if(j==1)c++ ; 
            }
            v.push_back(c) ; 
        }
        return v ; 
    }
};