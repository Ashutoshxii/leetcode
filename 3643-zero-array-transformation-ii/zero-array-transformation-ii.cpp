class Solution {
public:
    
    bool canZero(const vector<int>& orig, const vector<vector<int>>& queries, int k) {
        int n = orig.size();
        vector<int> diff(n + 1, 0); 
 
        for (int i = 0; i < k; i++) {
            int l = queries[i][0]; 
            int r = queries[i][1]; 
            int val = queries[i][2];

            diff[l] += val;
            if (r + 1 < n) 
                diff[r + 1] -= val;  
        }
 
        int c = 0;
        for (int i = 0; i < n; i++) {
            c += diff[i];
            if (c < orig[i]) 
                return false;   
        }
        return true;
    }

    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        
        bool isZero = true;
        for (int x : nums) {
            if (x != 0) { 
                isZero = false; 
                break;
            }
        }
        if (isZero) 
            return 0;

        int q = queries.size();
        int lo = 1, hi = q, ans = -1;

       
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (canZero(nums, queries, mid)) {
                ans = mid;        
                hi = mid - 1;  
            } else {
                lo = mid + 1;   
            }
        }
        return ans;
    }
};
