class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>ans(queries.size()) ; 

        for(int i = 0  ; i< queries.size() ; i++){
            int count = 0 ; 
            for(auto j : points){
                int x = j[0] ; 
                int y = j[1] ; 
                int sum = pow((queries[i][0] - x),2) + pow((queries[i][1] - y),2) ; 
                if(sum<= queries[i][2]*queries[i][2])count++ ; 
            }
            ans[i] = count ; 
        }
        return ans ;


    }
};