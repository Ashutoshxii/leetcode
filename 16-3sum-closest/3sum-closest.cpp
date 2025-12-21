class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = INT_MAX-1000090 ; 
        sort(nums.begin(),nums.end()) ; 

        for(int i  = 0 ; i < nums.size()-2 ; i++){
            int left = i+1 ; 
            int right = nums.size() - 1 ; 
            while(left<right){
                int x = nums[i] + nums[left] + nums[right] ;
                if(abs(ans-target)>abs(target-x)){
                    ans = x ; 
                }
                if(x > target){
                    right-- ; 
                }
                else{
                    left++ ; 
                }
            }
            
        }
        return ans ;  


    }
};