class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq(nums.begin(),nums.end()) ; 
        while(k--){
            int t = pq.top() ; pq.pop() ;
            t++ ; pq.push(t) ;
        }
        int mod = 1e9+7 ; 
        long long ans = 1 ; 
        while(!pq.empty()){
            ans = (ans* pq.top())%mod ;
            pq.pop() ; 
        }
        return ans ; 
    }
};