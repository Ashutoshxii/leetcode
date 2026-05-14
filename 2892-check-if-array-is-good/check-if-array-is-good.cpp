class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        int maxi = nums.back() ;
        if(nums.size()!=maxi+1)return 0 ; 
        for(int i = 1 ;i < nums.size() ;i++){
            if(i!=nums[i-1])return 0 ; 
        }
        // if(nums.back())
        return 1 ; 
    }
};