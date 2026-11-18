class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int mini = *min_element(nums.begin(),nums.end()) ; 
        int count = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i ; j < nums.size() ; j++){
                int ans = nums[i] ; 
                mini = *min_element(nums.begin()+i,nums.begin()+j+1) ; 
                for(int k = i+1 ; k <= j ;k++){
                    ans&=nums[k] ; 
                }
                if(ans==mini)count++ ; 
            }
        }
        return count ; 
    }
};