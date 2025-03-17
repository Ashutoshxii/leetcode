class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<int>vec  ; 
        vector<vector<int>>ans (matrix.size(),vector<int>(matrix[0].size())) ; 

        for(int i = 0 ; i < matrix[0].size() ; i++){
            int maxi = INT_MIN ; 
            for(int j = 0 ; j< matrix.size() ; j++){
                maxi = max(maxi,matrix[j][i]) ; 
            }
            vec.push_back(maxi);
          
        }

        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j  = 0 ; j < matrix[0].size() ;j++){
                if(matrix[i][j]==-1){
                    ans[i][j] = vec[j] ; 
                }
                else{
                    ans[i][j] = matrix[i][j] ; 
                }
            }
        }
        return ans ; 
    }
};