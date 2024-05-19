class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int> mpp ;
        for(int i = 0 ; i< nums.size() ; i++){
            mpp[nums[i]]++ ;
        }
        vector<int> v ; 
        for(int i = 0 ; i<nums.size();i++ ){
             if(mpp[i+1]==0)v.push_back(i+1);
        }
        return v ; 
    }
};