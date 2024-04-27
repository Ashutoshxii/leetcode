class Solution {
public:

    void setZeroes1(vector<vector<int>>& matrix,int k ,int l ) {
        int m = matrix[0].size() ; 
        int n = matrix.size() ; 
        for(int i = 0 ; i < n ;i++){
            matrix[i][l] = 0 ; 
        }
        for(int i = 0 ; i < m ;i++){
            matrix[k][i] = 0 ; 
        }

    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> v ;
        int m = matrix.size() ; 
        int n = matrix[0].size() ; 
        for(int i = 0 ; i < m;i++){
            for(int j = 0 ; j < n ;j++){
                if(matrix[i][j]==0){
                    v.push_back({i,j}) ; 
                }
            }
        }
        for(int i = 0 ; i < v.size() ; i++){
            setZeroes1(matrix,v[i][0],v[i][1]) ; 
         }
    }
};