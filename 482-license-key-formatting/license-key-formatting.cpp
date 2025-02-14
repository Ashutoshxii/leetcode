class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ans = "" ;


        int j = 0 ; 
        for(int i = s.size()-1 ; i >=0 ; i--){
            
            if(s[i]!='-'){
                if (s[i] != '-') {
                ans += toupper(s[i]);  
                j++;

                if (j == k) {
                    ans += '-';   
                    j = 0;
                }
            }
            }
            
        }
        if (!ans.empty() && ans.back() == '-') {
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end()) ;
        return ans ; 
    }
};