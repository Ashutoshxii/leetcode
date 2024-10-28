class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums ;
        sort(sorted.begin(),sorted.end()) ;
        vector<int> ans ; 
        for(int i = 0 ; i < nums.size() ; i++){
            
            for(int j = 0 ; j < nums.size() ; j++){
                if(nums[i]==sorted[j]){
                    ans.push_back(j) ; 
                    break ;
                }
            }
        }
        return ans ;
    }
};