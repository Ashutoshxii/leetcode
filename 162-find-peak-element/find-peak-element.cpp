class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0 ;
        int right = nums.size() - 1 ; 
        if(right==0)return 0 ; 
        if(nums[0]>nums[1])return 0 ; 
        if(nums[right]>nums[right-1])return right ; 
        int mid  = (left+right)/2 ;
        while(left<=right){
            mid = (left+right)/2 ;
            if(mid>0&&mid<nums.size()&&nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1]){
                return mid ; 
            }
            else if(nums[mid+1]>nums[mid]){
                left = mid +1 ; 
            }
            else{
                right = mid - 1 ; 
            }
        }
        return 0 ; 
    }
};