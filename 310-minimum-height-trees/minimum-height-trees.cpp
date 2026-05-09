class Solution {
public:
    
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(edges.empty()&&n>0)return {0} ; 
        vector<vector<int>>adj(n);
        vector<int>degree(n,0) ;  
        for(auto&i:edges){
            adj[i[0]].push_back(i[1]) ;  degree[i[0]]++ ; degree[i[1]]++ ; 
            adj[i[1]].push_back(i[0]) ;
        }
        queue<int>q; 
        int remains = n  ; 
        for(int i = 0 ; i < n ;i++){
            if(degree[i]==1){
                q.push(i) ; 
            }
        }
        while(remains>2){
            int size = q.size() ;
            remains-= size ; 
           
            while(size--){
                int node = q.front() ; q.pop() ; 
                for(auto&i:adj[node]){
                    degree[i]-- ;
                    if(degree[i]==1){
                        q.push(i) ; 
                    }
                }
            }
        }
        vector<int>ans ;
        while(!q.empty()){
            ans.push_back(q.front()) ; q.pop() ;
        }
        return ans ; 
        
    }
};