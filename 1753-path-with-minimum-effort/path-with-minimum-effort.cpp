class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size() ;
        int m = heights[0].size() ; 
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq ; 
        pq.push({0,{0,0}}) ; 
        vector<vector<int>>dist(n,vector<int>(m,INT_MAX)) ; 
        dist[0][0] = 0 ; 

        while(!pq.empty()){
            int d = pq.top().first ;
            int r = pq.top().second.first ; 
            int c = pq.top().second.second ; 
            pq.pop() ; 
            
            int dr[4] = {1,-1,0,0} ;
            int dc[4] = {0,0,1,-1} ;
            for(int i = 0 ; i<4 ;i++){
                int nr = r +dr[i] ;int nc = c + dc[i] ; 
                if(nr<0||nr>=n||nc<0||nc>=m)continue ; 
                int effort = abs(heights[r][c]-heights[nr][nc]) ; 
                effort = max(effort,d) ; 
                if(dist[nr][nc]>effort){
                    dist[nr][nc] = effort ;  
                    pq.push({dist[nr][nc],{nr,nc}}) ; 
                }
            }
        } 
        return dist[n-1][m-1] ; 
    }
};