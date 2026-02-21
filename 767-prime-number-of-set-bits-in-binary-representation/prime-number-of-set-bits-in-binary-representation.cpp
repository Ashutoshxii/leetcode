class Solution {
public:
    bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; 1LL * i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}
    int countPrimeSetBits(int left, int right) {
         unordered_set<int> prime = {2,3,5,7,11,13,17,19};

        int count = 0;

        for (int i = left; i <= right; i++) {
            int bits = __builtin_popcount(i);
            if (prime.count(bits))
                count++;
        }

        return count;
    }
};