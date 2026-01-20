class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size() ; 
        vector<int>ans(n) ;
        vector<int>st ; 
        for(int i = n-1 ; i >= 0 ;i--){
            int count = 0 ; 
            while(!st.empty()&&st.back()<= heights[i]){
                st.pop_back() ; 
                count++ ; 
            }
            if(!st.empty())count++ ; 
            st.push_back(heights[i]) ; 
            ans[i] = count ; 
        }
        return ans ; 
    }
};