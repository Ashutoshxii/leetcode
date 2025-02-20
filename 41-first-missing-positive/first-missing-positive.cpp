class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool one = false ;
        int n = nums.size() ; 

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]==1)one = true ; 
            if(nums[i]>n || nums[i]<=0){
                nums[i] = 1 ; 
            }
        }

        if(!one)return 1 ; 

        for(int i = 0 ; i < nums.size() ; i++){

            int k = abs(nums[i]) ; 
            if(k==n){
                nums[0] = -abs(nums[0]) ; 
            }   
            else{
                nums[k] = -abs(nums[k]) ; 
            }
        }
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i]>0){
                return i ; 
            }
        }

        if(nums[0]>0){
            return n ; 
        }
        return n + 1 ; 
    }

  

};