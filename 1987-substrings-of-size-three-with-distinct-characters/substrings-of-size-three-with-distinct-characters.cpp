class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char,int> mpp ; 
         
        int count = 0 ;
         
        int i = 0 ; 
        int j = 2 ;
        for(int i = 0 ; i < 3 ; i++){
            mpp[s[i]]++ ; 
        }
        while(i<s.size()&&j < s.size()){
            if(mpp[s[i]]==1&&mpp[s[i+1]]==1&&mpp[s[i+2]]==1){
                count++ ;      
            }
            mpp[s[i]]-- ; 
            i++ ; 
            j++ ; 
            mpp[s[j]]++ ;
        }
        return count ;
    }
};