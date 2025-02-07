class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end()) ; 
        int sum = 0 ; 
        // int i = 0 ; 
        for(int i = 0 ; i < nums.size() && k>0 &&nums[i]<0;i++){
            nums[i]*=-1 ;
            k-- ;
        }


        if(k>0){
            if(k%2){
                auto miniIt = min_element(nums.begin(),nums.end()) ;
                *miniIt = -*miniIt ; 
            }
        }
        
        for(int i : nums){
            sum+=i ;
        }
        return sum ; 


    }
};