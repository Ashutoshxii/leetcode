class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec ; 
     
        vec.push_back({{1}});
        if(numRows==1){
            return vec ; 
        }
        vec.push_back({{1,1}});
        if(numRows==2){
            return vec ; 
        }
        int k = 3 ; 
        while(k<=numRows){
            vector<int> row ; 
            row.push_back(1) ;
            for(int i = 1 ; i < k-1; i++){
                row.push_back(vec[k-2][i-1]+vec[k-2][i]) ; 
            }
            row.push_back(1) ;
            vec.push_back(row) ;  
            k++ ; 
        }
        return vec ; 

        
           
    }
};