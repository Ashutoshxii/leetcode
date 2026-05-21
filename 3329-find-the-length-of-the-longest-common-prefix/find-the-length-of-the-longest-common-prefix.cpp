class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int>st ; 
        for(int v : arr1){
            while(v>0 && !st.count(v)){
                st.insert(v) ; 
                v /= 10  ; 
            }
        }
        int ans = 0 ; 
        for(int v : arr2){
            while(v>0 && !st.count(v)){
                v = v /10 ; 
            }
            if(v>0){
                string s = to_string(v) ;
                ans = max(ans,(int)s.size()) ;
            }
        }
        return ans ;
    }
};