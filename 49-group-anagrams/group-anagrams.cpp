class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans ; 
        unordered_map<string,vector<string>>mpp ; 

        for(string &i : strs){
            string st = i ;
            sort(st.begin(),st.end()) ; 
            mpp[st].push_back(i) ; 
        }
        for(auto &i : mpp){
            ans.push_back(i.second) ; 
        }
        return ans ; 
    }
};