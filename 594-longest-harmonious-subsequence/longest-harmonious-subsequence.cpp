class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mpp ;
        for(int i = 0 ; i < nums.size() ; i++){
            mpp[nums[i]]++;
        }
        int maxi = 0 ; 
        int count = 0 ; 
        for(auto i : mpp){
            int number = i.first ; 
            if(mpp.find(number+1)!=mpp.end()){
                count = mpp[number]+mpp[number+1] ;
                maxi = max(count,maxi);
            }
        }
        return maxi ; 
    }
};