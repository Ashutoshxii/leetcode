class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size() ; 
        vector<int> arr(nums.size()) ;
        for(int i = 0 ; i< n  ; i++){
            arr[(i+k)%n] = nums[i] ; 
        }

        nums = arr; 
    }
};