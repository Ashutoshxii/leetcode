class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        long long count = 0 ; 
        int n = target.size() ; 
        vector<int>diff(n) ; 
        for(int i = 0 ; i< n ;i++){
            diff[i] = target[i]-nums[i] ; 
        }
        count+= abs(diff[0]) ; 
        for(int i = 1; i < n ;i++){
            if(diff[i]>0 && diff[i-1]>0){
                if(diff[i]>diff[i-1]){
                    count+= (diff[i]-diff[i-1]) ;
                } 
            }
            else if(diff[i]<0 && diff[i-1]<0){
                if(diff[i]<diff[i-1]){
                    count+= (diff[i-1]-diff[i]) ;
                } 
            }
            else count+= abs(diff[i]) ; 
            
        }
        return count ; 
    }
};