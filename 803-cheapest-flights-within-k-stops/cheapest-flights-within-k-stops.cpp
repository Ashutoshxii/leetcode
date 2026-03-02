class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>adj(n) ; 
        for(auto&i : flights){
            adj[i[0]].push_back({i[1],i[2]});
        }
        queue<pair<int,pair<int,int>>>q ; 
        q.push({0,{src,0}}) ; 
        vector<int>dist(n,INT_MAX) ; 
        while(!q.empty()){
            int step = q.front().first; int node = q.front().second.first;
            int d = q.front().second.second ; q.pop() ; 
            if(step>k)continue ; 
            for(auto&i:adj[node]){
                int neigh = i.first ;
                int w = i.second ; 
                if(dist[neigh]>w + d){
                    dist[neigh] =w + d ;
                    q.push({step+1,{neigh,dist[neigh]}}) ; 
                }
            }
        }

        if(dist[dst]==INT_MAX)return-1 ;
        return dist[dst] ; 
    }
};