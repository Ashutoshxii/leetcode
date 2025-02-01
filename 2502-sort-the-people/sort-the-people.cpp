class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> vec ; 
        unordered_map<int,string> mpp ; 
        for(int i = 0 ; i < names.size() ; i++){
            mpp[heights[i]] =  names[i]; 
        }
        sort(heights.begin(),heights.end(),greater<int>()) ; 
        
        for(int i = 0 ; i < heights.size() ; i++){
            vec.push_back(mpp[heights[i]]);
        }
        return vec ; 
    }
};