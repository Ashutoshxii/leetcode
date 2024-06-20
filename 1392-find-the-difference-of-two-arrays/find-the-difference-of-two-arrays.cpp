class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> mpp1 ;
        for(int i = 0 ; i< nums1.size() ; i++){
            mpp1.insert(nums1[i]) ; 
        }
        unordered_set<int> mpp2 ;
        for(int i = 0 ; i< nums2.size() ; i++){
            mpp2.insert(nums2[i]); 
        } 
        vector<int> ans1 ;
        vector<int> ans2 ; 
        for(int i : mpp1){
            if(mpp2.find(i)==mpp2.end()){
                ans1.push_back(i) ; 
            }
        } 
        for(int i : mpp2){
            if(mpp1.find(i)==mpp1.end()){
                ans2.push_back(i) ; 
            }
        } 
        vector<vector<int>> v ;
        v.push_back(ans1) ; 
        v.push_back(ans2) ; 
        return v ;


        
    }
};