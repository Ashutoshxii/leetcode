class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0 ; 
        int n = nums.size() ;
        for(int i = 0  ; i < n-1 ; i++){
            if(nums[i+1]<nums[i]){
                count++ ;
                if(count>1)return false ; 
            }
        }
        if(count==1&&nums[n-1]<=nums[0])return true ;
        else if(count==0)return true ;
        return false ; 
        
    }
};