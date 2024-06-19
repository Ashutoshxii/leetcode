class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0 ; int right = 0 ;
        int maxi = 0 ; int zeroc = 0 ;
        while(right<nums.size()){
            if(nums[right]==0){
                zeroc++ ;
            }
            while(zeroc>k){
                if(nums[left] == 0){
                    zeroc-- ; 
                }
                    left++ ;
            }
            maxi = max(maxi , right - left + 1);
            right++ ;
        }
        return maxi ; 
    }
};