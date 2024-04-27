class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v ;
        unordered_map<int,int> mpp ; 
        for(int i = 0 ; i < nums.size();i++){
            mpp[nums[i]]++ ; 
        }
        int k = nums.size()/3 ; 
        for(auto it = mpp.begin() ; it!= mpp.end();it++){
            if(it->second > k){
                v.push_back(it->first); 
            }
        }
        return v ;
    }
};