class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mpp ;
        int n = nums.size()/2 ; 
        for(int i : nums ){
            mpp[i]++ ; 
        }

        for(auto pair : mpp){
            if(pair.second==n){
                return pair.first ; 
            }
        }
        return -1 ; 


    }
};