class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
 
        int n = weights.size();
        vector<int> weighty(n - 1, 0);
        for (int i = 0; i < n - 1; ++i) {
            weighty[i] += weights[i] + weights[i + 1];
        }

        sort(weighty.begin(), weighty.end());
 
      
      long long  answer = 0;
        for (int i = 0; i < k - 1; ++i) {
            answer += weighty[n - 2 - i] - weighty[i];
        }

        return answer;
    }
};