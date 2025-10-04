class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>visited(rooms.size()) ;
        queue<int>q ; 
        q.push(0) ; 
        visited[0] = true ; 
        while(!q.empty()){
            int top = q.front(); 
            q.pop() ; 

            for(int i : rooms[top]){
                if(!visited[i]){
                    visited[i] = 1 ; 
                    q.push(i) ; 
                }
            }
        } 
        for(bool i : visited){
            if(!i)return false ;
        }
        return true; 
    }
};