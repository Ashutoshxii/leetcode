class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size() ; int m= grid[0].size() ; 

        vector<vector<bool>>visited(n,vector<bool>(m,0)) ; 
        queue<pair<int,int>>q ; 

        for(int i = 0 ; i < n ;i++){
            for(int j = 0 ; j < m ;j++){
                if((i==0||j==0||i==n-1||j==m-1)&&grid[i][j]){
                    q.push({i,j}) ;
                    visited[i][j] = true ; 
                }
            }
        }
        while(!q.empty()){
            int r = q.front().first ; int c=q.front().second ; 
            q.pop() ;
            int dx[4] ={-1,1,0,0} ; 
            int dy[4] ={0,0,1,-1} ; 
            for(int i = 0 ; i < 4 ;i++){
                int nr = r + dx[i] ;
                int nc = c + dy[i] ;
                if(nr<0||nc<0||nr>=n||nc>=m||grid[nr][nc]==0||visited[nr][nc]){
                    continue ; 
                }
                else{
                    q.push({nr,nc}) ; 
                    visited[nr][nc] = 1 ; 
                }
            }
        }
        int count = 0 ; 
        for(int i = 0 ; i < n;i++){
            for(int j = 0 ; j < m ;j++){
                if(!visited[i][j]&&grid[i][j]){
                    count++ ; 
                }
            }
        }
        return count ; 
    }
};