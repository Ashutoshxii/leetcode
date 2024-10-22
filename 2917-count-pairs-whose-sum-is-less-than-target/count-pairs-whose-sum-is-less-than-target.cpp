class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        // sort(nums.begin(),nums.end());
        int ans = 0 ; 
        int i = 0 ; 
        int j = nums.size()  ; 
        for(int i = 0 ; i < j ; i ++){
            for(int k = i + 1 ; k < j ; k++ ){
                if((nums[i]+nums[k])<target){
                    ans++ ;
                }
            }

        }
        return ans ; 
    }
};