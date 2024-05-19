class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int k = original ; 
        sort(nums.begin(),nums.end()) ; 
        for(int i = 0 ; i< nums.size() ; i++){
            if(nums[i]==k){
                k*=2 ; 
            }
        }
        // if(k==original)return -1 ; 
        
        return k ;
    }
};