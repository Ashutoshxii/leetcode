class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        
        int m = grid.size() ;
        int n = grid[0].size() ; 
        vector<int> oneCol(n,0) , zeroCol(n,0) ; 
        vector<int> oneRow(m,0) , zeroRow(m,0) ;

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j  < n ;j++){
                if(grid[i][j]==1){
                    oneRow[i]++ ;
                    oneCol[j]++ ; 

                }
                else{
                    zeroRow[i]++ ;
                    zeroCol[j]++ ; 
                }
            }
        } 
        vector<vector<int>> vec (m,vector<int>(n,0)) ; 

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                vec[i][j] = oneCol[j]+oneRow[i] -zeroCol[j]-zeroRow[i] ; 
            }
        }
        return vec ;

    }
};