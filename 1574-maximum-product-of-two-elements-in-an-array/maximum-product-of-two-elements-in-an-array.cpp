class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = -1  ; 
        int max2 = 0 ; 

        for(int i : nums){
            if(i>=max1){
                max2 = max1 ; 
                max1 = i ;
            }
            else if(i>max2){
                max2 = i ; 
            }
        }
        return ((max2-1)*(max1-1)) ; 
    }
};