class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>>ans ; 
        // sort(nums.begin(),nums.end()) ; 
        int tn = upper - lower + 1 ;
        vector<bool>track(tn,false) ; 
        for(auto i : nums){
            if(i>=lower && i <= upper){
                i-= lower ; 
                track[i] = 1 ; 
            }
        }
        int i = 0 ; 
        while(i < tn){
            int l = i ; 
            int r = i ; 
            while(i<tn&&!track[i]){
                i++ ; 
            }
            // i-= 1 ; 
            r = i-1 ; 
            if(l<=r){
                ans.push_back({l+lower,r+lower}) ; 
            }
            i++ ;

        }
        return ans ;
    }
};