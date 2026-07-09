class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        int ans = INT_MAX ; 
        vector<bool>visited(n+1,0) ; 
        vector<vector<pair<int,int>>>adj(n+1) ; 
        for(auto&i:roads){
            adj[i[0]].push_back({i[1],i[2]}) ; 
            adj[i[1]].push_back({i[0],i[2]}) ; 
        }
        queue<int>q ; 
        q.push(1) ; 
        visited[1] = 0 ; 
        
        while(!q.empty()){
            int node =  q.front() ; q.pop() ; 
            for(auto&i:adj[node]){
                if(!visited[i.first]){
                    q.push(i.first) ; 
                    visited[i.first] = 1 ; 
                    ans = min(ans,i.second) ; 
                }
                else{
                    ans = min(ans,i.second) ; 
                }
            }
        }
        return ans ;
    }
};