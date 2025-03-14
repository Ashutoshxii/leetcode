class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        sort(candies.begin(), candies.end());
        int n = candies.size();
        int maxi = candies[n - 1];

        long long val = 1;
        long long ans = 0;

        int left = 1 ; 
        int right = maxi ; 


        while(left<=right){
            int mid = left + (right-left)/2 ; 
            
            long long count = 0;
            for (int i = 0; i < n; i++) {
                count += candies[i] / mid;  
                if(count>=k)break ; 
            }

            if (count >= k) {
                ans = mid;  
                left = mid+1;
            } else {
                right = mid-1; 
            }
        }

        return ans;
        
    }
};
