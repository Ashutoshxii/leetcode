class Solution {
public:
    bool dfs(int x,int y,vector<vector<char>>&board,vector<vector<bool>>&visited,string &word,int k){
        if(k==word.size())return true; 
        if(x<0||y<0||x>=board.size()||y>=board[0].size()||board[x][y]!=word[k]||visited[x][y])return false  ; 
        visited[x][y] = true ; 
        bool real = dfs(x+1,y,board,visited,word,k+1) || 
        dfs(x-1,y,board,visited,word,k+1) || 
        dfs(x,y+1,board,visited,word,k+1) || 
        dfs(x,y-1,board,visited,word,k+1)  ; 
        if(real)return true ; 
        visited[x][y] = false ; 
        return false ; 
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size() ; int m = board[0].size() ; 
        vector<vector<bool>>visited(n,vector<bool>(m,0)) ; 
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ;j++){
                if(word[0]==board[i][j]){
                    if(dfs(i,j,board,visited,word,0))return true; 
                }
            }
        }
        return false ; 
    }
};