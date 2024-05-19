class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxi = 1;
        int count = 1 ; 
        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(nums[i]<nums[i+1]){
                count++ ;
                maxi = max(maxi,count) ;
            }
            else{
                count = 1; 
            }
        }
        return maxi ; 
    }
};