class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size() ; 
        vector<int>ans(n,INT_MAX) ; 
        for(int i = 0 ; i < n;i++){
            if(s[i]==c){
                int count = 1 ; int j  = i-1 ; int k = i+1  ;
                ans[i] = 0 ; 
                while(j >= 0 && count < ans[j]){
                    ans[j] =  count++ ; 
                    j-- ; 
                }
                count =  1 ; 
                while(k < n && count < ans[k]){
                    ans[k]  = count++ ; 
                    k++ ; 
                }
            }
        }
        return ans ; 
    }
};