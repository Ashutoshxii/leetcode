class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adjacent (n) ;
        for(auto i : edges){         
            adjacent[i[0]].push_back(i[1]) ; 
            adjacent[i[1]].push_back(i[0]) ;     
        }

        vector<bool>visited(n,false) ; 

        queue<int>q ; 
        visited[source] = 1  ; 
        q.push(source) ;    

        while(!q.empty()){
            int top = q.front() ; 
            q.pop() ; 
            for(int i : adjacent[top]){
                if(!visited[i]){
                    visited[i] = 1 ; 
                    q.push(i) ; 
                    if(i==destination)return 1; 
                }
            }
        }
        return visited[destination] ; 

    }
};