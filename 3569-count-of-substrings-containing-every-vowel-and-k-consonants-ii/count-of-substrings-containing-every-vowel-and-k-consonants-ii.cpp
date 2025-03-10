class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    long long countOfSubstrings(string word, int k) {
        long long ans = 0;
        int start = 0;
        int end = 0;
        unordered_map<char, int> vow;
        int con = 0;

        vector<int> nextConsonant(word.size());
        int nextConsonantIndex = word.size();
        for (int i = word.size() - 1; i >= 0; i--) {
            nextConsonant[i] = nextConsonantIndex;
            if (!isVowel(word[i])) {
                nextConsonantIndex = i;
            }
        }

        while (end < word.size()) {
            char newLetter = word[end];

            if (isVowel(newLetter)) {
                vow[newLetter]++;
            } else {
                con++;
            }

            while (con > k) {
                char startLetter = word[start];
                if (isVowel(startLetter)) {
                    vow[startLetter]--;
                    if (vow[startLetter] == 0) {
                        vow.erase(startLetter);
                    }
                } else {
                    con--;
                }
                start++;
            }

            while (start < word.size() && vow.size() == 5 &&
                   con == k) {
                ans += nextConsonant[end] - end;
                char startLetter = word[start];
                if (isVowel(startLetter)) {
                    vow[startLetter]--;
                    if (vow[startLetter] == 0) {
                        vow.erase(startLetter);
                    }
                } else {
                    con--;
                }

                start++;
            }
            end++;
        }

        return ans;
    }
};