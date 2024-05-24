class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size()<k)return 0 ;
        int i = 0 ;
        int j = k ;
        double sumi = 0 ;
        while(i < j){
            sumi+=nums[i];
            i++ ;
        }
        double avg = sumi/k;
        double maxavg = max(avg,maxavg);
        i = 0 ; 
        j= k ; 
        while(i<nums.size()&&j<nums.size()){
           sumi = sumi - nums[i] + nums[j] ; 
           avg = sumi/k ; 
            maxavg = max(maxavg,avg);
            i++ ;
            j++ ;
        }
        return maxavg ; 
    }
};