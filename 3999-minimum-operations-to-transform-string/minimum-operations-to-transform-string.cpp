class Solution {
public:
    int minOperations(string s) {
        

        vector<bool>st(26,false) ;  
        bool ist = false ; 

        for(int i = 0 ; i < s.size() ;i++){
            int x = s[i]-'a' ;
            st[x]  = true ;  

        }
        int ans = 0 ;
        int v = 0 ;  
        for(int i = 1; i < 26 ;i++){
            if(st[i]){
                v=i ; 
                break ; 
            }
        }

        if(v==0)return 0 ; 

        return 26-v ; 
    }
};