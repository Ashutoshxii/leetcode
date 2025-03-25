class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size() ; 
        // int arr[n+1] ; 
        unordered_map<int,int> mpp ; 

        for(auto i : edges){
            mpp[i[0]]++ ;
            mpp[i[1]]++ ;
        }
        int maxi = 0 ; 
        int ans = 0 ; 
        for(auto i : mpp){
            if(i.second>maxi){
                maxi = i.second ;
                ans =  i.first ; 
            }
        }
        return ans ; 
    }
};