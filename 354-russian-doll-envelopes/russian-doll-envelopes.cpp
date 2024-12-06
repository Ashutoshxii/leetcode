class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin() , envelopes.end(),[](vector<int>& a , vector<int>& b){
            if(a[0]==b[0]){
                return a[1] > b[1]  ; 
            }
            else{
                return a[0] < b[0] ;
            }
        });
        vector<int> dp ;
        dp.push_back(envelopes[0][1]) ; 
        for(int i = 1 ; i < envelopes.size() ; i++){
            if(dp.back()>=envelopes[i][1]){
                int j = lower_bound(dp.begin(), dp.end() ,envelopes[i][1]) - dp.begin() ; 
                dp[j] = envelopes[i][1] ; 
            }
            else{
                dp.push_back(envelopes[i][1]) ; 
            }
        }
        return dp.size() ; 

    }
};