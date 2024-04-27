class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v ;
        if(nums.size()==1){
           if(nums[0]!=target){
            v.push_back(-1) ; 
             v.push_back(-1) ; 
            return v ;
           }
           else{
            v.push_back(0) ; 
             v.push_back(0) ; 
            return v ;
           }
        }
        int i = 0 ; 
        int j = nums.size()-1 ;
        int mid = (i+j)/2 ;
        while(i<=j){
            mid = (i+j)/2 ;
            if(nums[mid]==target){
                
                while(mid>0&&nums[mid]==nums[mid-1]){
                    mid-- ; 
                }
                v.push_back(mid) ; 
                while(mid<nums.size()-1&&nums[mid]==nums[mid+1]){
                    mid++ ;
                }
                v.push_back(mid) ;
                return v ;
            }
            else if(nums[mid]<target){
                i = mid+1 ; 
            }
            else{
                j = mid-1 ;
            }
        }
        v.push_back(-1) ; 
        v.push_back(-1) ; 
        return v ; 
    }
};