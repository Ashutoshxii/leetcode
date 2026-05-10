class Solution {
public:
    long long minArraySum(vector<int>& nums) {
        long long sum = 0 ; 
        int n = nums.size()  ;  
        vector<bool>real(100000,0) ;
        for(int &i:nums){
            real[i] = 1 ;
        }
        for(int &i : nums){
            int best = i ; 
            for(int divisor = 1 ; divisor*divisor <= i ; divisor++){
                if(i%divisor==0){
                    if(real[divisor]){
                        best = min(best,divisor) ; 
                    }
                    if(real[i/divisor]){
                        best = min(best,i/divisor) ; 
                    }
                }
            }
            sum+= best ; 
        }
        // for(int &i :nums){
        //     sum+= i ; 
        // }
        return sum ; 

    }
};