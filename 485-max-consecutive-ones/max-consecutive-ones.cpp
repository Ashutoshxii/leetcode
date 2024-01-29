class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0 ; 
        int one = 0 ;
        int maxone = -1 ; 
        int n = nums.size() - 1 ; 
        for(int i = 0 ; i < n; i++){
            if(nums[i]==1){
            continue ;
            }
        }
        if(i==n&&nums[i]==0){
            return 0 ;  
        }
        
       
        
        while(i<nums.size()){
            
            
            if(nums[i]==1){
                one++;
                maxone= max(one,maxone);
                i++;
            }
            else{
                one = 0 ;
                i++;
            }
        }
        if(maxone == -1 ){
            return 0 ; 
        }
    return maxone ;
    }
};