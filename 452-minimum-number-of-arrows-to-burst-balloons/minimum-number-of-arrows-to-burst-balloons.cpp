class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size() ; 
        sort(points.begin(),points.end(),[](vector<int>&a,vector<int>&b){
            return a[1] < b[1] ; 
        });
        int count = 1 ; 
        int lastarrow = points[0][1] ;
        for(int i = 1 ; i < n ;i++){
            if(lastarrow<points[i][0]){
                count++ ; 
                lastarrow = points[i][1] ; 
            }
        }
        return count ; 
    }
};