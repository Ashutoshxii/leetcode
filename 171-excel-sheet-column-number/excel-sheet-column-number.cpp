class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int size = columnTitle.size()-1 ;
        int ans = 0 ;
        int k = 0 ; 
        for(int i = size ; i >= 0 ;i--){
            ans += (columnTitle[i] - 'A' + 1)* pow(26,k) ; 
            k++ ; 
        }
        return ans ; }
    };