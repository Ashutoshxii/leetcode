class Solution {
public:
    bool dfs(int i,vector<bool>&visited,vector<int>&color,vector<vector<int>>&graph){
         
        visited[i] = true ;
        if(color[i]==0)color[i] = 1 ;  
        for(int neigh:graph[i]){
            if(!visited[neigh]){
                if(color[i]==1)color[neigh] = 2 ; 
                else color[neigh] = 1 ; 
                
                if(!dfs(neigh,visited,color,graph))return false ; 
            }
            else if(color[neigh]==color[i]){
                    return false ; 
            }
        }
        return true ; 
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size() ; 
        vector<bool>visited(n,0) ; 
        vector<int>color(n,0) ; 
        for(int i = 0 ; i < n;i++){
            if(!visited[i]){
                if(!dfs(i,visited,color,graph))return 0  ; 
            }
        }
        return 1 ; 
    }
};