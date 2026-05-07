class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int>maxi(n) ; 
        vector<int>mini(n) ; 
        
        int miny = INT_MAX ; int maxy = INT_MIN ; 
        for(int i = 0 ; i < n ;i++){
            maxy = max(maxy,nums[i]) ; 
            maxi[i] = maxy ; 
        }
        for(int i = n-1; i>= 0 ;i--){
            miny = min(miny,nums[i]) ; 
            mini[i] = miny ; 
        }
        vector<int>ans(n) ; 
        int k = n-1 ;
        for(int i =n-1 ; i>= 0 ; i--){
            while(k >= 0 && mini[k] >= maxi[i]) {
                k--;
            }
            if(k >= 0 && maxi[k] > maxi[i]) {
                ans[i] = ans[k]; 
            } else {
                 ans[i] = maxi[i];
            }

        }
        return ans ; 
    }
};