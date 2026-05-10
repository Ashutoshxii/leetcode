class Solution {
public: 
    void solve(int x,int y,vector<vector<bool>>&visited,vector<vector<char>>&board){
        if(x>=board.size()||x<0||y>=board[0].size()||y<0||visited[x][y]||board[x][y]!='X')return ; 
        visited[x][y] = 1 ;
        solve(x+1,y,visited,board) ;
        solve(x-1,y,visited,board) ;
        solve(x,y-1,visited,board) ;
        solve(x,y+1,visited,board) ;
        return ; 
    }
    int countBattleships(vector<vector<char>>& board) {
        int count = 0 ; 
        int n = board.size() ; 
        int m = board[0].size() ; 
        vector<vector<bool>>visited(n,vector<bool>(m,0)) ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ;j++){
                if(!visited[i][j]&&board[i][j]=='X'){
                    solve(i,j,visited,board) ; 
                    count++ ; 
                }
            }
        } 
        return count ; 
    }
};