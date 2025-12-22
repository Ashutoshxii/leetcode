class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<2)return 0 ; 
        int count = 0 ; 
        int mult = 1 ; 
        int j = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            mult*= nums[i] ; 
            while(mult>= k ){
                mult/= nums[j] ; 
                j++ ; 
            }
            count += i-j + 1 ; 
        }
        return count ; 
    }
};