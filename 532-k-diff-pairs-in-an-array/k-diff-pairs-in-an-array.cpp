class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count = 0 ; 
        int n = nums.size() ; 
        sort(nums.begin(),nums.end()) ; 
        if(k==0){
            for(int i = 1 ; i< n ;i++){
                if(nums[i-1]==nums[i]){
                    count++ ;
                    while(i + 1 < n && nums[i-1]==nums[i])i++ ; 
                }
            }
            return count ; 
        }
        for(int i = 0 ; i < n; i++){
            if(binary_search(nums.begin(),nums.end(),nums[i]-k)){
                count++ ; 
                while(i+1 < n && nums[i]==nums[i+1])i++ ; 
            }
        }
        return count ; 
    }
};