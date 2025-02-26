class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int sum = 0 ; 
        for(int i = 0 ; i < nums.size() ;i++){
             bool ist = true ; 
             if(i-k>=0){
                if(nums[i-k]>= nums[i]){
                    ist = false ; 
                }
             }
             if(i+k< nums.size()){
                if(nums[i+k]>= nums[i]){
                    ist = false ; 
                }

             }
             if(ist){
                sum+=nums[i] ; 
             }

        }
        return sum ; 
    }
};