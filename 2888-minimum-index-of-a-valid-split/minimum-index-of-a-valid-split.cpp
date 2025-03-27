class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int> mpp ; 
        int n = nums.size() ; 
        for(int i : nums){
            mpp[i]++ ; 
        }
        int x ; 
        for(auto i : mpp){
            if(i.second>n/2){
                x = i.first ; 
                break ; 
            }
        }

        int z = mpp[x] ; 
      
        int count = 0  ; 

        for(int i = 0 ; i < n ;i++){
            if(nums[i]==x)count++ ; 

            if (count * 2 > (i + 1) && (z - count) * 2 > (n - i - 1)) {
                return i ; 
            }
        }
        return -1 ; 
    }
};