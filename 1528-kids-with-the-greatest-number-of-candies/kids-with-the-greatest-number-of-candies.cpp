class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mix  = INT_MIN ;
        for(int i = 0 ; i < candies.size() ; i++){
            mix = max(mix,candies[i]);
        }
        vector<bool> v(candies.size());
        for(int i = 0 ; i < candies.size() ; i++){
            if(extraCandies+candies[i]>=mix){
                v[i] = true ;
            }
            else{
                v[i] = false ; 
            }
        } 
        return v ;
    }
};