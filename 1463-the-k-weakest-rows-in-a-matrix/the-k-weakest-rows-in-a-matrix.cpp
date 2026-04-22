class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> track ; 
        int n = mat.size() ; int m  = mat[0].size() ; 
        for(int i = 0 ; i < n ;i++){
            int c = 0 ; 
            for(int j = 0 ; j < m ;j++){
                if(mat[i][j])c++ ; 
            }
            track.push_back({c,i}) ; 
        }
        sort(track.begin(),track.end()) ; 
        vector<int>v ; 
        for(int i = 0 ; i<n&&i < k ;i++){
            v.push_back(track[i].second) ; 
        }
        return v ; 
    }

};