class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int> vec ;
        int mini = INT_MAX ; 
        for(int i : cost){
            mini = min(mini,i) ; 
            vec.push_back(mini) ; 
        }
        return vec; 
    }
};