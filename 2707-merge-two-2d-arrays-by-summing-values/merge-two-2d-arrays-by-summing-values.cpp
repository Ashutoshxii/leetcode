class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int, int> mpp;

 
    for (auto& pair : nums1) {
        mpp[pair[0]] += pair[1];
    }

    
    for (auto& pair : nums2) {
        mpp[pair[0]] += pair[1];
    }

 
    vector<vector<int>> vec;
    for (auto& entry : mpp) {
        vec.push_back({entry.first, entry.second});
    }

 
    sort(vec.begin(), vec.end());

    return vec;

    }
};