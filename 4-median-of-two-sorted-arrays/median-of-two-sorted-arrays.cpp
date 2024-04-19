class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v ; 
        int i = 0 ; 
        int j = 0 ; 
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<nums2[j]){
                v.push_back(nums1[i]) ; 
                i++ ; 
            }
            else{
                v.push_back(nums2[j]) ; 
                j++ ;
            }
        }
        while(i<nums1.size()){
            v.push_back(nums1[i]) ; 
                i++ ; 
        }
        while(j<nums2.size()){
            v.push_back(nums2[j]) ; 
                j++ ;
        }
        int n = v.size() ; 
        
        if(n%2==1){
            double d = v[n/2] ;
            return d ; 
        }
        else{
            double d1 = v[n/2] ; 
            double d2 = v[n/2-1] ; 
            double d = (d1+d2)/2; 
            return d ; 
        }
    }
};