class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        vector<int> v ;
        int k = nums.size()/3 ;
        int c = 1 ; 
        for(int i = 0 ; i < nums.size();i++){
            while(i < nums.size() - 1 && nums[i] == nums[i + 1]){
                c++ ;
                i++ ; 
            }
            if(c>k){
                v.push_back(nums[i]);

            }
            c = 1 ; 
        }
        return v ; 
    }
};