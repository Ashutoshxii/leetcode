class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxInc = 1;
        int maxDec = 1;

        int inc = 1 ; 
        int dec = 1 ; 

        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(nums[i]<nums[i+1]){
                dec = 1 ; 
                inc++ ; 
                maxInc = max(inc,maxInc);
            }
            else if(nums[i]>nums[i+1]){
                inc = 1 ;
                dec++ ; 
                maxDec = max(maxDec,dec) ; 
            }
            else{
                dec=1 ;
                inc = 1 ;
            }
        }
        return max(maxInc,maxDec) ; 
    }
   

};