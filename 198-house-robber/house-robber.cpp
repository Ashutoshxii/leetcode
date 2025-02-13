class Solution {
public:
    // int solve(vector<int> nums , int index ,vector<int>&vec ) {
    //     if(index >= nums.size()){
    //         return 0; 
    //     }

    //     if(vec[index]!=-1){
    //         return vec[index] ; 
    //     }

    //     int take = nums[index] + solve(nums,index+2,vec) ;
    //     int untake = solve(nums , index+1,vec) ; 

    //     return vec[index] = max(take,untake) ; 

    // }
    int rob(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int> vec(n + 1 , -1) ; 
        // return solve(nums , 0 ,vec) ;

        vec[0] = 0 ; 
        vec[1] = nums[0] ; 

        for(int i = 2 ; i < n+1; i++ ){
            vec[i] = max((vec[i-2] + nums[i-1]) , vec[i-1]) ;
        }
        return vec[n] ; 
        
    }
};