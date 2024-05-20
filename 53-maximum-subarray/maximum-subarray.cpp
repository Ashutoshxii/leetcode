class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s = nums.size() ;
        int i = 0 ; 
        int j = 1 ;
        int maxi  = INT_MIN ; 
        int sum = 0 ;
        for(int i = 0 ; i< s ; i++){
            sum+=nums[i];
            maxi=max(sum,maxi) ;
            if(sum<0){
                sum=0 ;
            }
        }
        return maxi ;
    }
};