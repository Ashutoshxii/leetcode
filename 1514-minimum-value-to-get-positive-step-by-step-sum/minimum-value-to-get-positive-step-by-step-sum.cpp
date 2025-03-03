class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int> sumy (nums.size() , 0) ; 
        int sum = 0 ; 
        int mini = INT_MAX ; 
        for(int i = 0 ; i < nums.size() ; i++){
            sum+=nums[i] ; 
            sumy[i] = sum  ;
            mini  = min(mini , sumy[i]) ;  
        }
        if(mini > 0){
            return 1 ; 
        }
         
        mini = -mini ; 
        return mini +1 ; 
    }
};