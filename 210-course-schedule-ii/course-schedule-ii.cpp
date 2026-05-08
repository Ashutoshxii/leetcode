class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses ; 
        vector<vector<int>>adj(n) ;
        vector<int>indegree(n,0) ; 
        for(auto&i : prerequisites){
            adj[i[1]].push_back(i[0]) ; 
            indegree[i[0]]++ ; 
        } 
        vector<int>ans ; 
        queue<int>q ; 
        for(int i = 0 ; i < n ;i++){
            if(indegree[i]==0)q.push(i) ; 
        }
        while(!q.empty()){
            int node = q.front() ; q.pop() ; 
            ans.push_back(node) ; 
            for(int &i : adj[node]){
                indegree[i]-- ;
                if(indegree[i]==0)q.push(i) ; 
            }
        }
        if(ans.size()<n)return {} ; 
        return ans ; 
    }
};