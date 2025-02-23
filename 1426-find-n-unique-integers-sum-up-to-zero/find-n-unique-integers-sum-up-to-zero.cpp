class Solution {
public:
    vector<int> sumZero(int n) {
        int k = -n/2 ; 
        vector<int> ans ; 

        for(int i = k ; i<0 ; i++){
            ans.push_back(i) ;
            ans.push_back(-i) ;
        }
        if(n%2==1){
            ans.push_back(0) ;
        }
        return ans ; 
    }
};