class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size() ; 
        int s = newInterval[0] ; int e = newInterval[1] ; 
        int i = 0 ; 
        vector<vector<int>>ans ; 
        while(i<n && intervals[i][1] < s ){
            ans.push_back({intervals[i][0],intervals[i][1]}) ; i++ ; 
        }
        if(i == n){
            ans.push_back({s,e}) ; return ans ; 
        }
        int start = min(intervals[i][0],s) ; 
        while(i < n && intervals[i][0] <= e){
            e = max(intervals[i][1],e); 
             i++ ;
        }
        ans.push_back({start,e}) ; 
        while(i<n ){
            ans.push_back({intervals[i][0],intervals[i][1]}) ; i++ ; 
        }
        return ans ;


    }
};