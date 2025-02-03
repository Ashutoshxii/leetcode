class Solution {
public:
    string intToRoman(int k) {
         

       vector<pair<string, int>> mpp = {
        {"M", 1000}, {"CM", 900}, {"D", 500}, {"CD", 400},
        {"C", 100},  {"XC", 90},  {"L", 50},  {"XL", 40},
        {"X", 10},   {"IX", 9},   {"V", 5},   {"IV", 4},
        {"I", 1}
    };

    string st = "";
    for (auto pair : mpp) {
        int count = k / pair.second;
        k %= pair.second;
         while (count--) {
            st += pair.first;  // Correctly append the full Roman numeral string
        }
    }
    return st;
    }
};