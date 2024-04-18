class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result ; 

        sort(nums.begin(),nums.end()) ; 
        
        int n = nums.size()  ; 
        for(int i = 0 ; i < n ; i++){
            if(i>0&&nums[i]==nums[i-1]){
                continue ; 
            }
            for(int j = i + 1 ; j < n ; j++){
                if(j>i+1&&nums[j]==nums[j-1]){
                continue ; 
                }
                int k = j + 1 ;
                int l = n - 1 ;
                while(k<l){
                    long long   sumi =  static_cast<long long>(nums[i]) + nums[j] + nums[k] + nums[l]; 
                     
                    if(sumi==target){
                     
                    result.push_back({nums[i],nums[j],nums[k],nums[l]}) ;
                     

                    while(k<l&&nums[k]==nums[k+1]){
                            k++ ; 
                    }
                    while(k<l&&nums[l]==nums[l-1]){
                            l-- ; 
                    }
                    k++ ; 
                    l-- ;
                    }
                    else if(sumi>target){
                        l--;
                    }
                    else{
                        k++ ; 
                    }

                }
            
            }
            

            

        }
        return result ; 
    }
};