class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxi = 0 ;
        map<int,int> mpp ;  
        for(int i = 0 ; i< nums.size() ; i++){
            mpp[nums[i]]++ ;
            maxi = max(maxi,mpp[nums[i]]);
        }
        int count = 0 ; 
        for(auto i : mpp){
            if(i.second==maxi){
                count+=maxi ; 
            }
        }
        return count ; 
    }
};