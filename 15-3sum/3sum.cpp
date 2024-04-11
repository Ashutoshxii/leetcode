class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans ; 
        sort(nums.begin(),nums.end()) ; 
        int n = nums.size() ; 
        for(int i = 0 ; i < n ; i++ ){
            if (i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            int j = i + 1 ; 
            int k = n - 1 ; 
            while(j < k ){
                if(nums[i]+nums[j]+nums[k] == 0 ){
                    vector <int> ans1  ; 
                    ans1.push_back(nums[i]);
                    ans1.push_back(nums[j]);
                    ans1.push_back(nums[k]);
                    ans.push_back(ans1) ; 
                    while(j<k&&nums[j] == nums[j+1]){
                        j++;
                    }
                    while(j<k&&nums[k] == nums[k-1]){
                        k--;
                    }
                    j++;
                    k--;
                }
                else if(nums[i]+nums[k]+nums[j] < 0){
                    j++ ; 
                }
                else{
                    k--;
                }
            }
        }
        return ans ; 

    }
};