class Solution {
public:
    vector<int>parent ; 
    vector<int>depth ; 

    int find(int node){
        if(parent[node]==-1){
            return node ;
        }

        return parent[node] =  find(parent[node]);
    }

    void uniony(int node1 , int node2){
        int root1 = find(node1) ;
        int root2 = find(node2) ;

        if(root1 == root2)return ;
        if(depth[node1]<depth[node2]){
            swap(root1,root2) ; 
        }

        parent[root2] = root1 ;

        if(depth[root1]==depth[root2]){
            depth[root2]++ ; 
        }
    }

    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        parent.resize(n,-1);
        depth.resize(n,0) ; 



        for(auto edge : edges){
            uniony(edge[0],edge[1]) ;
        }

        vector<int>cost(n,-1) ; 
        for(auto edge : edges){
            int root = find(edge[0]);
            cost[root]&=edge[2] ; 
        }

        vector<int> answer ; 

        for(auto q : query){
            int start = q[0] ;
            int end =q[1] ; 

            if(find(start)!=find(end)){
                answer.push_back(-1) ; 
            }
            else{
                int root = find(start) ; 
                answer.push_back(cost[root]) ; 
            }
        }
        return answer ; 

    }
};