class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        
        for(int i = 0 ; i < 2 ; i++){
            for(int j = 0 ; j < 2 ;j++){
                int count1 = 0 ; int count2 = 0 ;  
                for(int k = i ; k < i+2 ; k++){
                    for(int l = j ; l < j+2 ;l++){
                        if(grid[k][l]=='W')count1++ ;
                        else count2++ ;  
                    }
                }
                if(count1!=count2)return 1 ; 
            }
        }
        return 0 ; 
    }
};