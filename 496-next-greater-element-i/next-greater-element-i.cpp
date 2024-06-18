class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans ; 
        for(int i =0 ; i < nums1.size() ; i++){
            int j = nums2.size() - 1 ;
                stack<int> st ;
                st.push(-1) ;
            while(nums2[j]!=nums1[i]){
                // int maxi = -2 ;
                if(nums2[j]>nums1[i]){
                    st.push(nums2[j]);
                }
                j--;
            }
                ans.push_back(st.top()) ;
        }
        return ans ; 
    }
};