class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size() ; int m = mat[0].size() ;
        vector<vector<int>>dist(n,vector<int>(m,0)) ; 
        vector<vector<bool>>visited(n,vector<bool>(m,0)) ;
        queue<pair<pair<int,int>,int>>q ; 
        for(int i = 0 ; i < n ;i++){
            for(int j = 0 ;j <m;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    visited[i][j] = 1 ; 
                }
            }
        } 
        while(!q.empty()){
            int r = q.front().first.first ;int c =q.front().first.second;
            int step = q.front().second ; q.pop() ;
            dist[r][c] = step ; 
            int dr[4] ={1,-1,0,0} ;
            int dc[4] ={0,0,1,-1} ;
            for(int i = 0; i < 4;i++ ){
                int nc = c +dc[i] ; int nr=r+dr[i] ; 
                if(nc<0||nc>=m||nr<0||nr>=n||visited[nr][nc]||mat[nr][nc]==0){
                    continue ; 
                }
                else{
                    q.push({{nr,nc},step+1});
                    visited[nr][nc] = 1 ; 
                }
            }
        }
        return dist; 
    }
};