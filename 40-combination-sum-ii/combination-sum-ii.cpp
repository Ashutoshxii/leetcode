class Solution {
public:
    void solve(int ind,vector<int>&can,int t,vector<int>&path,vector<vector<int>>&ans){
        if(t==0)ans.push_back(path) ; 
        if(t<0)return ; 
        for(int i = ind ; i < can.size() ;i++){
            if(i>ind&&can[i-1]==can[i])continue ; 
            path.push_back(can[i]) ; 
            solve(i+1,can,t-can[i],path,ans) ; 
            path.pop_back() ; 
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans ;
        vector<int>path ;
        sort(candidates.begin(),candidates.end()) ;  
        solve(0,candidates,target,path,ans) ;
        return ans ; 
    }
};