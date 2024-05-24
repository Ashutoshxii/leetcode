class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)return 0 ;
        int count = 1 ;
        int maxi = 1 ;
        int i = 0 ;
        int j = i+1;
        unordered_map<int,int> mpp;
        mpp[s[i]]++ ; 
        mpp[s[j]]++ ; 
        while(i<s.size() && j <s.size()){
            if(mpp[s[j]]>1){
                while(mpp[s[j]]>1){
                    mpp[s[i]]--;
                    i++ ; 
                    count--;
                }
            }
            else{
                count++ ; 
                j++ ;
                mpp[s[j]]++ ;
            }
                maxi = max(maxi,count) ;
        }
        return maxi ; 
    }
};