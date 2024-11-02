class Solution {
public:
    int minElement(vector<int>& nums) {
        // vector<int> nums ; 
        for(int i = 0 ; i< nums.size() ; i++){
            int k = 0 ; 
            int m = nums[i] ;
            while(m>0){
                k += m%10 ; 
                m/=10 ; 
            }
            nums[i] = k ;

        }
        int mini = INT_MAX ;
        for(int i = 0 ; i < nums.size() ; i++){
            mini = min(mini,nums[i]) ; 
        }
        return mini ; 
    }
};