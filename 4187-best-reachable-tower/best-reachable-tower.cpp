class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        
        int maxi = -1;
        vector<vector<int>>ans ; 

        int x  = -1 ; 
        int y = -1 ; 
         
        for(int i = 0 ; i < towers.size() ; i++){
            int man = abs(towers[i][0]-center[0])+abs(towers[i][1] - center[1]) ;
            if(man<=radius){
                if(towers[i][2]>maxi){
                     maxi = towers[i][2] ; 
                        x = towers[i][0] ; 
                        y = towers[i][1] ; 

                }
                else if(maxi == towers[i][2]){
                    if(towers[i][0]<x ||(towers[i][0]==x&&towers[i][1]<y)){
                        x = towers[i][0] ; 
                        y = towers[i][1] ; 
                    }
                }
                
            } 
            
        }
        return {x,y} ; 
        

    }
};