class Solution {
public:
    int countTriples(int n) {
        vector<int>v(n) ; 
        for(int i = 1 ; i <= n ; i++){
            v[i-1] = i*i ; 
        }
        int count = 0 ; 
        for(int i = 5 ; i <= n ;i++){
            for(int j = 1 ; j < i ; j++){
                int x = v[i-1] - v[j-1] ; 
                if(binary_search(v.begin(),v.begin()+i , x)){
                    count++ ; 
                }
            }
        }
        return count ; 
    }
};