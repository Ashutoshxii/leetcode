class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());
        int i = 0 ; 
        int j = 0 ;
        int count = 0  ; 
        for(i = 0 ; i < nums1.size() ; i++){
            for(j = 0 ; j < nums2.size() ; j++){
                if(nums1[i]%(nums2[j]*k)==0){
                    count ++ ; 
                }
            }
        }
        return count ; 
    }
};