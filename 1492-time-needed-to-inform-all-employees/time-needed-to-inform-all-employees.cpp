class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {

        vector<vector<int>> adjacent (n) ;

        queue<pair<int,int>> q ;

        for(int i = 0 ; i < n ; i++){
            if(manager[i]!=-1){
                adjacent[manager[i]].push_back(i);
            }
            else{
                q.push({i,0});
            }
        }
        
         
    
        int ans = 0 ; 
 
    
        while(!q.empty()){
            int node = q.front().first ;
            int time = q.front().second ;  
        
            q.pop() ;

             
   
            for(int i = 0 ; i < adjacent[node].size() ;i++){
                 
                    q.push({adjacent[node][i],time+informTime[node]}) ; 
                    
                
            }
            ans = max(ans,time+informTime[node]) ; 
             
         
        }
        return ans ; 
    }
};