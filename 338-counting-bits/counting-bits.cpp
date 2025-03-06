class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans ; 

        for(int i = 0 ; i <= n ; i++){
            int count = 0 ; 
            int num = i  ; 
            while(num>0){
                if(1&num)count++ ; 
                num = num >>1 ; 
            }
            ans.push_back(count) ;
        }
        return ans ; 
    }
};