class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int need = abs(target[0]) + abs(target[1])  ; 
        for(auto & i: ghosts){
            int x = abs(i[0]-target[0]) + abs(i[1]-target[1]) ; 
            if(x<=need)return false ; 
        }
        return true ; 
    }
};