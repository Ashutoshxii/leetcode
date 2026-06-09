class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int count = 0 ; 
        queue<pair<int,int>>q ; 
        q.push({entrance[0],entrance[1]}) ; 
        int ex = entrance[0]  ; int ey = entrance[1] ; 
        int n = maze.size() ; 
        int m = maze[0].size() ; 
        vector<vector<bool>>visited(n,vector<bool>(m,0)) ; 
        visited[ex][ey] = 1 ;
        

        while(!q.empty()){
            int size = q.size() ; 
            count++ ; 
            while(size--){
                int x = q.front().first ; 
                int y = q.front().second ; 
                q.pop() ; 
                int arrx[4] = {1,-1,0,0} ; int arry[4] = {0,0,1,-1} ; 
                for(int i = 0 ; i < 4 ; i++){
                    int dx = arrx[i] + x ;
                    int dy = arry[i] + y ;
                    if(dx<n&&dy<m&&dx>=0&&dy>=0&&!visited[dx][dy]&&maze[dx][dy]=='.'){
                        if(dx==0||dy==0||dx==n-1||dy==m-1){
                            return count ; 
                        }
                        q.push({dx,dy}) ; 
                        visited[dx][dy] = 1 ; 
                    }
                }
            } 
        }
        return -1 ; 
    }
};