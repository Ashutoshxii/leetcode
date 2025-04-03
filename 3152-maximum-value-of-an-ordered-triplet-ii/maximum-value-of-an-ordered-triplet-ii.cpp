class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
         int n = nums.size();
        long long ans = 0;
        
        vector<int> suffixMax(n);
        suffixMax[n-1] = nums[n-1];

     
        for (int i = n - 2; i >= 0; i--) {
            suffixMax[i] = max(suffixMax[i + 1], nums[i]);
        }

        int maxPrefix = nums[0];    

        for (int j = 1; j < n - 1; j++) {
            if (nums[j] < maxPrefix) { 
                ans = max(ans, (long long)(maxPrefix - nums[j]) * suffixMax[j + 1]);
            }
            maxPrefix = max(maxPrefix, nums[j]);  
        }

        return ans;
    }
};