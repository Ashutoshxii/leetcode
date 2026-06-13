class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans ="" ;
        
        for(string &st : words){
            int sum = 0 ; 
            for(int i = 0 ; i < st.size() ; i++){
                sum+= weights[st[i]-'a'] ; 
            }
            sum = sum%26 ; 
            sum = 26-sum ; 
            sum += 'a' ; 
            ans+=sum-1 ; 
        }
        return ans ; 
    }
};