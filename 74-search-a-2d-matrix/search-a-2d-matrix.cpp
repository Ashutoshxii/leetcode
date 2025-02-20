class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0 ;
        int row = matrix.size() ; 
        int col  = matrix[0].size() ; 
        int end = row *col - 1 ; 
        int mid = (start+end)/2 ; 

        while(start<=end){
            mid = (start+end)/2 ;
            int midval = matrix[mid/col][mid%col] ;
            if(midval==target){
                return true ; 
            }
            else if(midval>target){
                end = mid - 1 ;
            }
            else{
                start = mid + 1 ; 
            }
        }
        return false ; 
    }
};