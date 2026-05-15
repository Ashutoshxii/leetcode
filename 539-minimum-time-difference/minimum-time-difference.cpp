class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>v ; 
        for(auto&i:timePoints){
            int h = stoi(i.substr(0,2));
            int m = stoi(i.substr(3,2));
            int t = h*60+m;
            v.push_back(t) ; 
        }
        sort(v.begin(),v.end()) ; 
        int n = v.size() ; int mini = INT_MAX ; 
        for(int i = 1 ; i < n ;i++){
            mini = min(mini , v[i] - v[i-1]) ;
        }
        mini = min(mini,1440-(v.back()-v[0])) ; 
        return mini ; 
    }
};