class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = cost.size() ; 
        int total =  0 ;
        int ans = 0 ; 
        int remain = 0 ; 
        for(int i = 0 ; i < n;i++){
            total += gas[i] - cost[i] ; 
            remain += gas[i] - cost[i] ; 
            if(remain < 0){
                ans = i+1 ; 
                remain = 0 ; 
            }
        }
        return total<0 ? -1 : ans ;
    }
};