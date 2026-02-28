class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int v = numCourses ; 
        vector<vector<int>>adj(v) ; 
        vector<int>indegree(v,0) ; 
        for(auto&i : prerequisites){
            adj[i[1]].push_back(i[0]) ;
            indegree[i[0]]++ ; 
        }
        queue<int>q ; 
        for(int i = 0 ; i < v ;i++){
            if(indegree[i]==0)q.push(i) ; 
        }
        int count = 0 ;
        while(!q.empty()){
            int node = q.front() ; q.pop() ; 
            count++ ; 
            for(int&i : adj[node]){
                indegree[i]-- ; 
                if(indegree[i]==0)q.push(i) ; 
            }
        }
        if(count==v)return true ;
        return false ; 
    }
};