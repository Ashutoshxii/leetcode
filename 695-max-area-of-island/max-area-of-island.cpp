class Solution {
public:
    void dfs(int i,int j,int&count,vector<vector<int>>&grid,vector<vector<bool>>&visited){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||visited[i][j]||grid[i][j]==0)return  ; 
        count++ ; 
        visited[i][j] = 1 ; 
        dfs(i+1,j,count,grid,visited) ; 
        dfs(i,j+1,count,grid,visited) ; 
        dfs(i-1,j,count,grid,visited) ; 
        dfs(i,j-1,count,grid,visited) ; 
        return ; 
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size() ; int m = grid[0].size() ; 
        vector<vector<bool>>visited(n,vector<bool>(m,0)) ; 
        int ans = 0 ; 
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ;j++){
                if(!visited[i][j]&&grid[i][j]){
                    int count = 0 ; 
                    dfs(i,j,count,grid,visited) ; 
                    ans = max(ans,count) ; 
                }
            }
        }
        return ans ; 
    }
};