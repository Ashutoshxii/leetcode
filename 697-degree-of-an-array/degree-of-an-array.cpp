class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> freq , first , last ;
        int maxi = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(first.find(nums[i])==first.end()){
                first[nums[i]] = i ; 
            }
            freq[nums[i]]++ ; 
            last[nums[i]] = i ;
            maxi = max(maxi , freq[nums[i]])  ; 
        } 

        int mini = INT_MAX  ; 
        
        for(auto & [num , f] : freq ){
            if(f==maxi){
                mini = min(mini , (last[num]-first[num] + 1  )) ;
            }
        }
        return mini ; 



    }
};