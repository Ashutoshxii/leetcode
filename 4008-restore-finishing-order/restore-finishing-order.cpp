class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>ans ; 
        unordered_map<int,bool>mpp ; 
        for(int i:friends){
            mpp[i] = true ; 
        }
        for(int &i : order){
            if(mpp.find(i)!=mpp.end()&&mpp[i]){
                mpp[i] = false ; 
                ans.push_back(i) ; 
            }
        }
        return ans ; 
    }
};