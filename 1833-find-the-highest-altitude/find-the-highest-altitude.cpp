class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        vector<int> vec ; 
        int sum = 0 ; 
        int maxi = INT_MIN ; 
        for(int i = 0 ; i < gain.size() ; i++){
            sum += gain[i]; 
            vec.push_back( sum );
            maxi= max(maxi,vec[i]);

        }
        if(maxi<0){
            return 0 ; 
        }
        return maxi ; 
    }
};