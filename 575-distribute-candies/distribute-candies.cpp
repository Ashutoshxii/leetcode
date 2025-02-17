class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> st ; 

        for(int i : candyType){
            st.insert(i) ; 
        }
        // int n = candyType.size()/2 ; 
        // int x = st.size() ; 

        return min((candyType.size()/2),(st.size())) ; 
    }
};