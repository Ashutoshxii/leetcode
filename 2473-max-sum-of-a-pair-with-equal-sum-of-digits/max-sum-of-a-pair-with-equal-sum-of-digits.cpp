class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int maxi = -1;

        for (int num : nums) {
            int digitSum = 0, temp = num;
            while (temp > 0) {
                digitSum += temp % 10;
                temp /= 10;
             }

            if (mpp.count(digitSum)) {
                maxi = max(maxi, num + mpp[digitSum]);
            }

             mpp[digitSum] = max(mpp[digitSum], num);
        }

        return maxi;
    }
};