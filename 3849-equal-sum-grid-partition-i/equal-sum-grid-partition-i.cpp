class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long total = 0 ; 
        int n = grid.size() ; 
        int m = grid[0].size() ; 
        vector<long long>hori; 
        vector<long long>verti; 
        for(int i = 0 ; i < n ;i++){
            long long counth = 0 ;
            for(int j = 0 ; j < m ;j++){
                total+= grid[i][j] ;
                counth+= grid[i][j] ;  
            }
            hori.push_back(counth) ;    
        }
        if(total%2==1)return false ; 
        for(int j = 0 ; j < m ;j++){
            long long counth = 0 ;
            for(int i = 0 ; i < n ;i++){
                counth+= grid[i][j] ;  
            }
            verti.push_back(counth) ;    
        }
        long long need = total/2 ; 
        long long sumer = 0 ;
        for(int i = 0 ; i < n;i++){
            sumer+=hori[i] ; 
            if(sumer == need)return true ; 
        }
        sumer = 0 ; 
        for(int i = 0 ; i < m;i++){
            sumer+=verti[i] ; 
            if(sumer == need)return true ; 
        }
        return false ;
        
    }
};