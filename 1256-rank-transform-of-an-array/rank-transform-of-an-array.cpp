class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       vector<int>a(arr.begin(),arr.end()) ;
        int n = arr.size() ;  
        sort(a.begin(),a.end()) ; 
        unordered_map<int,int>mpp ; 
        int count = 1 ; 
        for(int i = 0 ; i < n ;i++){
            if(i==0){
                mpp[a[i]] = count++ ; 
                continue ; 
            }
            if(a[i]==a[i-1])count-- ;  
            mpp[a[i]] = count++ ;
        }
        vector<int>ans(n) ; 
        for(int i = 0 ; i < n ;i++){
            ans[i] = mpp[arr[i]] ; 
        }
        return ans ; 
    }
};