class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        long long ans = 0 ; 
        int n = pizzas.size() ; 
        n = n/4 ; 
        int odd = (n+1)/2 ; 
        int even = n/2 ; 
        sort(pizzas.begin(),pizzas.end(),greater<int>()) ; 
        for(int i = 0 ; i < odd ;i++){
            ans += pizzas[i] ; 
        }
        int index = odd ; 
        for(int i = 0;i < even ;i++){
            index++ ; 
            ans+= pizzas[index] ;
            index++ ; 
        }
        return ans ; 
    }
};