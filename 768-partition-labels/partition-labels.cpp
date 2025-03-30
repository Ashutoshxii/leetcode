class Solution {
public:
    vector<int> partitionLabels(string s) {
        // unordered_map<pair<char,pair<int,int>> mpp ; 

        vector<vector<int>> vec(26,vector<int>(2,-1)) ; 
        for (int i = 0; i < s.size(); i++) {
            int k = s[i] - 'a';
            if (vec[k][0] == -1) {
                vec[k][0] = i;
            }
            vec[k][1] = i;
        }

        vector<int> ans ;
        int start = 0, end = 0;

         
        for (int i = 0; i < s.size(); i++) {
            end = max(end, vec[s[i] - 'a'][1]);
            if (i == end) {
                ans.push_back(end - start + 1);
                start = i + 1;
            }
        }
        return ans ; 
        
    }
};