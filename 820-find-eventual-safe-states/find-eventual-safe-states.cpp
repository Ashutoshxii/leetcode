class Solution {
public: 
    bool dfs(int node,vector<bool>&visited,vector<bool>&path,vector<bool>&safe,vector<vector<int>>&graph){
        visited[node] = 1 ;
        safe[node] = 0 ;
        path[node] = 1 ;
        for(int &neigh:graph[node]){
            if(!visited[neigh]){
                if(dfs(neigh,visited,path,safe,graph)){
                    safe[node] = 0 ; 
                    return true ;
                }
            }
            else if(path[neigh]){
                safe[node] = 0 ;
                return true; 
            }
        }
        path[node] = 0 ;
        safe[node] = 1 ;
        return false ; 
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v = graph.size() ; 
        vector<bool>visited(v,0),path(v,0),safe(v,0) ; 
        for(int i = 0 ; i < v ;i++){
            if(!visited[i]){
                dfs(i,visited,path,safe,graph) ; 
            }
        }
        vector<int>ans ; 
        for(int i = 0 ; i < v ;i++){
            if(safe[i])ans.push_back(i) ; 
        }
        return ans ;
    }
};