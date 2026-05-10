class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size()  ; 
        vector<int>v(n*2) ; 
        for(int i = 0 ; i < n ;i++)v[i] = nums[i] ; 
        int i = 0 ; int j = n*2 - 1 ;
        while( i < j){
            v[j--] = v[i++] ;  
        }
        return v ; 
    }
};