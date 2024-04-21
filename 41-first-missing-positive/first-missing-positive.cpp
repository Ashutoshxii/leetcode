class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> nam ; 
        sort(nums.begin(),nums.end());
        int k = 0 ; 
        while(k<nums.size()){
            if(nums[k]>0){
                nam.push_back(nums[k]) ;
                if(k<nums.size()-1){
                    while(k<nums.size()-1&&nums[k]==nums[k+1]){
                    k++ ; 
                }
                }
            }
            k++ ;
        }
        if(nam.empty()){
            return 1 ; 
        }
         
        int i ; 
        for(i = 1 ; i <= nam.size();i++){
            if(i!=nam[i-1]){
                return i ; 
            }

        }
        
        return i;
    }
};