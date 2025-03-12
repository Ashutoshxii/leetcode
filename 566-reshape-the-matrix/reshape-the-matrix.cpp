class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> vec ; 
         if (mat.size() *mat[0].size() != r * c) {
             
            return mat;
        }
        for(int i = 0 ; i < mat.size() ; i++){
            for(int  j = 0 ; j < mat[0].size() ; j++){
                vec.push_back(mat[i][j]); 
            }
        }

    

        // vector<vector<int>>vec (r , vector<int>(c,0)) ; 
        vector<vector<int>> ans(r, vector<int>(c, 0));

        int k = 0 ; 
        for(int i =0 ; i <r ;  i++){
            for(int j = 0 ; j < c ; j++){
                ans[i][j] = vec[k++] ; 
            }
        }
        return ans ; 
    }
};