class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        

        unordered_map<string,int> mpp ;
        int count = 0 ; 
        for(int i = 0 ; i < words.size() ; i++){
            if(mpp.find(words[i])!=mpp.end()){
                count++ ; 
                mpp[words[i]]-- ;
            }
            else{
                string st = words[i] ; 
                reverse(st.begin(),st.end()) ; 
                mpp[st]++ ; 
            }
        }
        return count ; 
    }
};