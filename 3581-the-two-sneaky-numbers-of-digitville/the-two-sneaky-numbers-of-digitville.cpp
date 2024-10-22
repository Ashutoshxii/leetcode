class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans ;
        unordered_map<int,bool> mpp ;
        for(int i = 0 ; i < nums.size();i++){
            if(mpp[nums[i]]){
                ans.push_back(nums[i]);
            }
            else{
                mpp[nums[i]] = true ; 
            }
        }
        return ans ; 
    }
};