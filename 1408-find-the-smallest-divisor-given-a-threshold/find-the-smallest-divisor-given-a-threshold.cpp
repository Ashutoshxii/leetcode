class Solution {
public:
    int solve(vector<int>&nums,int x){
        int ans = 0 ; 
        for(int&i:nums){
            ans += (i-1+x)/x ; 
        }
        return ans ; 
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(),nums.end()) ; int n = nums.size() ; 
        int s = 1 ; int e = nums[n-1] ; 
        int mid = (s+e)/2 ; 
        int ans = nums[n-1] ; 
        while(s <= e ){
            mid = (s+e)/2  ; 
            if(solve(nums,mid)<=threshold){
                ans = mid ; 
                e  = mid-1 ; 
            }
            else{
                s = mid+1 ; 
            }
            
        }
        return ans ; 
    }
};