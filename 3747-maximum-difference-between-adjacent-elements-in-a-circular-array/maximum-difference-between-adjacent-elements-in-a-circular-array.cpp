class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxi = 0 ; 
        int n = nums.size()  ; 
        for(int i = 0 ; i < n-1 ; i++){
            maxi = max(maxi , abs(nums[i+1] - nums[i])) ; 
        }

        maxi = max(maxi , abs(nums[0] - nums[n-1])) ;
        return maxi ; 
    }
};