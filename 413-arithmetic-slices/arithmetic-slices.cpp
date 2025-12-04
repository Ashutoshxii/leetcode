class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<int>diff ; 
        if(nums.size()==1)return 0 ; 
        for(int i = 1 ; i < nums.size() ; i++){
            diff.push_back(nums[i]-nums[i-1]);
        }
        int ans = 0 ; 
        int count = 0 ; 
        for(int i = 0 ; i < diff.size()-1 ; i++){
            if(diff[i]==diff[i+1]){
                count++ ; 
                ans+= count ; 
            }
            else count = 0 ;
        }
        return ans ; 
    }
};