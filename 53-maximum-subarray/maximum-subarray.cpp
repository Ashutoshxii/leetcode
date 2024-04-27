class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int j = 0 ;
        int sum =  0; 
        int c = INT_MIN ;  
        while(j<nums.size()){
            sum+=nums[j] ; 
            c = max(c,sum) ; 
            if(sum<0){
                sum = 0 ; 
            }
            j++ ; 
        }
        return c ;
    }
};