class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp ;
        for(int i : arr){
            mpp[i]++ ; 
        }
        unordered_map<int,int> mpp2 ;
        for(const auto&pair:mpp){
            if(mpp2[pair.second]>0){
                return false ; 
            }
            mpp2[pair.second]++;
        }
        return true ; 
    }
};