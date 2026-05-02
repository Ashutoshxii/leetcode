class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count = 0 ;
        int n = grid.size() ; int m = grid[0].size() ; 
        int dx[4] = {1,0} ;
        int dy[4] = {0,1} ;
        int reduce = 0 ; 
        for(int i = 0 ; i < n ;i++){
            for(int j = 0 ; j< m ;j++ ){
                
                if(grid[i][j]==1){
                        count++ ; 
                    for(int k = 0 ; k < 2 ;k++){
                        int newx = dx[k] + i ; 
                        int newy = dy[k] + j ;
                        if(newx<0||newx>=n||newy<0||newy>=m||!grid[newx][newy])continue ; 
                        reduce++ ; 
                    }
                }
              
            }
        }
        
        return (4*count) - (reduce*2);
    }
};