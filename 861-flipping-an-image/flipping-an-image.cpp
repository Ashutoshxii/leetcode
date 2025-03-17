class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        

        for(int i = 0 ; i < image.size() ; i++){
            int j = 0 ; 
            int k = image[i].size()-1 ;
            while(j<k){
                swap(image[i][j],image[i][k]);
                image[i][j] = !image[i][j] ; 
                image[i][k] = !image[i][k] ; 
                j++ ; 
                k-- ; 
            }
            if(j == k){
                image[i][j] = !image[i][j];
            }
        }
        
        return image  ; 
    }
};