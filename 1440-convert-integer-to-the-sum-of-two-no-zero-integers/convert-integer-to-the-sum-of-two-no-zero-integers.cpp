class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans ; 
        
        for(int i = 1; i < n ; i++){
            int k = i ; 
            bool ist = false ; 
            while(k > 0){
                if(k%10==0){
                    ist = true ; 
                    break ; 
                }
                k = k / 10 ; 
            }
            k = n-i ; 
            while(k > 0){
                if(k%10==0){
                    ist = true ; 
                    break ; 
                }
                k = k / 10 ; 
            }
            if (ist)continue ;
            ans.push_back(i)  ; 
            ans.push_back(n-i) ;
            break ;  
        }
        return ans ; 
    }
};