class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size() ; 
        string ans = "" ; 
        
        for(int i = 0 ; i < strs[0].size() ;i++){
            set<char>st ; 
            bool valid = 1 ; 
            if(!valid)break ; 
            for(int j = 0 ; j < n ;j++){
                if(i >= strs[j].size()){
                    valid = false ; 
                    break ; 
                }
                st.insert(strs[j][i]) ; 
            }
            if(st.size()>1){
                valid = 0 ; 
                break ; 
            }
            else if(valid&&st.size()==1){
                char ch  = *st.begin() ; 
                ans += ch ; 
            }
        }
        return ans ; 
    }
};