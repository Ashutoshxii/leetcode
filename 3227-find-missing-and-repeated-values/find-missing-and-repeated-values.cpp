class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int> mpp ; 
        int  n = grid.size() ; 
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                mpp[grid[i][j]]++ ; 
            }
        }
        int mis ; 
        vector<int> ans ; 
        for(int i = 1 ; i <=n*n ; i++ ){
            if(mpp[i]==0){
                mis = i ;
            }
            else if(mpp[i]==2){
                ans.push_back(i) ; 
            }
        }
        ans.push_back(mis) ;
        return ans ; 
    }
};