class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ; 
        int n = nums.size() ; 
        if(n==1){
            return nums[0]  ; 
        }
        int c = 1 ; 
        for(int i = 0 ; i < n ; i++){
            
            if(nums[i]==nums[i+1]){
                c++ ; 
                // cout<<c;
                if(c>(n/2)){
                return nums[i] ; }
            
            }
            else{
                c = 1 ; 
            }
        }
        return -1 ; 
    }
};