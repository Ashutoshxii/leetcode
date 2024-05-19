class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> v(nums) ; 
        int maxi = 0  ;
        int maxind = 0 ; 
        for(int i = 0 ; i< nums.size() ; i++){
            if(nums[i]>maxi){
                maxi = nums[i] ;
                maxind = i ; 
            }
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]!=maxi&&nums[i]*2>maxi){
                return -1 ; 
            }
        }
        return maxind ; 
    }
};