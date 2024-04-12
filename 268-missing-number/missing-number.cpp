class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ; 
        int n = nums.size() ; 
        int k = 0 ; 
        for(int i = 0 ; i< n ; i++){
            if(k!=nums[i]){
                return k ; 
            }
            else{
                k++ ; 
            }
        }
        return k ; 
    }
};