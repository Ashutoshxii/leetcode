class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>>rows(9) ; 
        vector<set<char>>cols(9) ;
        vector<vector<set<char>>>boxes(3,vector<set<char>>(3)) ;
        for(int i = 0 ; i < 9 ; i++ ){
            for(int j = 0 ; j < 9 ;j++){
                char ch = board[i][j] ;
                if(ch=='.')continue ; 

                int boxRow = i/3 ;
                int boxCol = j/3 ; 
                if(rows[i].count(ch)||cols[j].count(ch)||boxes[boxRow][boxCol].count(ch))return false ; 

                rows[i].insert(ch);
                cols[j].insert(ch) ; 
                boxes[boxRow][boxCol].insert(ch) ; 
            }
        }
        return true ; 


    }
};