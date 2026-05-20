class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size() ; 
        vector<int>ans ; 
        int count = 0 ; 
        vector<int>track(n+1,0) ; 
        for(int i = 0 ; i < n ;i++){
            track[A[i]]++ ;
            track[B[i]]++ ;
            if(A[i]==B[i]){
                if(track[A[i]]==2)count++ ; 
            }
            else{
                if(track[A[i]]==2)count++ ;
                if(track[B[i]]==2)count++ ;
            }
            ans.push_back(count) ; 
        }
        return ans ; 
    }
};