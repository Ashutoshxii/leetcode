class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n = nums.size()   ; 
        vector<bool>visited(n,0) ;
        int ans = 0 ; 
        for(int i = 0 ; i < n ;i++){
            if(visited[nums[i]])continue ; 
            int count = 0 ; int curr = nums[i] ; 
            while(!visited[curr]){
                visited[curr] = 1 ; 
                curr = nums[curr] ; 
                count++ ; 
            }
            ans = max(count,ans) ; 
        } 
        return ans ; 
    }
};