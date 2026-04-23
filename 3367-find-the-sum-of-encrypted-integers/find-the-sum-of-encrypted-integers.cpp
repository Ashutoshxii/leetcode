class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sumer = 0 ; 
        for(int i : nums){
            int count = 0 ; 
            int maxi = 0 ; 
            while(i > 0){
                count++ ; 
                maxi = max(maxi,i%10) ; 
                i /= 10 ; 
            }
            int x = 0 ; 
            while(count--){
                x *= 10 ;
                x+= maxi ; 
            }
            sumer+= x ; 
        }
        return sumer ; 
    }
};