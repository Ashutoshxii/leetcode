class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> ans ; 

        for(int i = left ; i<= right ; i++){
            int k = i ; 
            bool ist = true ; 
            while(k>0){
                int j = k%10 ;
                if(j==0 || i%j!=0){
                    ist = false ; 
                    break ; 
                }
                k = k/10 ; 

            }
            if(ist){
                ans.push_back(i) ; 
            }
        }
        return ans ; 



    }
};