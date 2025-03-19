class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0){
                count++ ;
                int j = i ;
                if(j+3>nums.size()){
                        return - 1;
                }
                while(j < i+3){
                    nums[j] = !nums[j];
                    j++ ; 
                     
                }
            }
        }
        
        
        return count ; 
    }
};