class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size = nums.size() ; 
        vector<int> ans ; 
        int i = 0 ; 
        int j = n ; 
        int k = 0 ; 
        while(j<size){
            ans.push_back(nums[i]); 
            ans.push_back(nums[j]);
            i++ ;
            j++ ;
            
        }
        return ans ; 
    }
};