class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_map<int,int> mpp ;
        for(int i = 0 ; i<s.size() ;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                mpp[i]++ ;
            }
        }
        int count = 0 ;
        int maxi = 0 ;
        for(int i = 0 ; i < k ; i++){
            if(mpp[i]==1){
                count++;
            }
        }
        maxi = count ; 
        for(int i = k; i < s.size() ; i++){
            // int counti = 0 ; 
            if(mpp[i]==1&&mpp[i-k]==0){
                count++;
            }
            else if(mpp[i]==0&&mpp[i-k]==1){
                count--;
            }
            // else{

            // }
            maxi = max(maxi,count) ;
        }
        return maxi ; 
    }
};