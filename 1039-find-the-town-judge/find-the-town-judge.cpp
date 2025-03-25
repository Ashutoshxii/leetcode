class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>coming(n+1,0),going(n+1,0) ;
        for(auto i : trust){
            coming[i[1]]++ ;
            going[i[0]]++ ; 
        }
        for(int i = 1; i <= n ;i++){
            if(going[i]==0&&coming[i]==n-1){
                return i ;
            }
        }
        return -1 ; 
    }
};