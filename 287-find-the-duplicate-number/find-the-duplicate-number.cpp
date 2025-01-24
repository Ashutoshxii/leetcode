class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,bool> mpp ; 

        for(int i = 0 ; i< nums.size() ; i++){
            if(mpp[nums[i]]){return nums[i] ; }
            mpp[nums[i]] = 1 ;
        }
        return 0 ; 
    }
};