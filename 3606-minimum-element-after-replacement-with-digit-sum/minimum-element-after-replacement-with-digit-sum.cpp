class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> sum ; 
        for(int i = 0 ; i< nums.size() ; i++){
            int k = 0 ; 
            int m = nums[i] ;
            while(m>0){
                k += m%10 ; 
                m/=10 ; 
            }
            sum.push_back(k) ;

        }
        sort(sum.begin(),sum.end()) ;
        return sum[0] ; 
    }
};