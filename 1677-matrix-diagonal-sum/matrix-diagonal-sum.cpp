class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int sum = 0 ; 

        int i = 0 ,j = 0 ;

        while(i<mat.size()){
            sum+=mat[i][j] ;
            i++ ; 
            j++ ; 
        }

        i = mat.size()-1 ; 
        j = 0 ; 

        while(j<mat.size()){
            sum+=mat[j][i] ;
            i-- ;
            j++ ;
        }
        int k = mat.size() ; 
        if(k%2){
            sum-=mat[k/2][k/2] ; 
        }
        return sum ; 
    }

};