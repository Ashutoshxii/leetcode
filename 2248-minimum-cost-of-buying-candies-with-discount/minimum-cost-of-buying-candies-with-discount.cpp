class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size() ;
        int total = 0 ; 
        sort(cost.begin(),cost.end()) ; 
        int i = n - 1 ;
        int j = n - 2 ; 
        while(i >= 0 ){
            total+= cost[i] ; 
            i-= 3 ;
        }
        while(j >= 0 ){
            total+= cost[j] ; 
            j-= 3 ;
        }
        return total ; 
    }
};