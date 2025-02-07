class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        int i = nums.size()-1 ; 
         

        for(i ; i > 1 ;i--){
            if(nums[i-2]+nums[i-1]>nums[i]){
                return nums[i-1]+nums[i]+nums[i-2] ;
            }
        }
        return 0 ; 
    }
};