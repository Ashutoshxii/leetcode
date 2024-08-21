class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0 ; 
        for(int i : nums){
            sum+=i;
        }
         
        int left = 0 ;
        int right = sum - nums[0] ; 
        int size = nums.size() - 1 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(i==size){
                if(left==0){
                    return i ;
                }
                else{
                    return -1 ; 
                }
            }
            if(left==right){
                return i ; 
            }
            left+=nums[i] ;
            right-=nums[i+1] ; 
        }
        return -1 ; 
    }
};