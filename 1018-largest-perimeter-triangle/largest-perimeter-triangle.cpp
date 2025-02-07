class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        int i = nums.size()-1 ; 
        int j = i - 1; 
        int k = j-1 ; 

        for(i ; i > 1 ;i--){
            if(nums[j]+nums[k]>nums[i]){
                return nums[i]+nums[j]+nums[k] ;
            }
            j-- ; 
            k-- ;
        }
        return 0 ; 
    }
};