class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end()) ;

        int s = 0 ; 
        int e = nums.size() -1  ;
        int index = -1 ; 
        vector<int> ans ; 
        int mid = (s+e)/2 ; 
        // int mid ; 
        while(s<=e){
            mid = (s + e)/2 ;
            if(nums[mid]==target){
                index = mid ; 
                break ; 
            }
            else if(nums[mid]>target){
                e = mid-1 ;
            }
            else{
                s = mid+1 ;
            }
        }
        if(index==-1){
            return ans ; 
        }

         while (index > 0 && nums[index - 1] == target) {
            index--;
        }

        while (index < nums.size() && nums[index] == target) {
            ans.push_back(index) ;
            index++ ; 
        }
        return ans ; 
        

    }
};