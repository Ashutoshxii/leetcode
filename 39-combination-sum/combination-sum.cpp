class Solution {
public:
    void solve(int ind,vector<int>&can,int target,vector<int>&path,vector<vector<int>>&ans){
        if(target==0)ans.push_back(path) ; 
        if(target<0)return ; 
        for(int i = ind ; i < can.size();i++){
            path.push_back(can[i]) ; 
            solve(i,can,target-can[i],path,ans) ; 
            path.pop_back() ; 
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans ; 
        vector<int>path ; 
        solve(0,candidates,target,path,ans) ;
        return ans ; 
    }
};