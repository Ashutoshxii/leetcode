class Solution {
public:
    bool checkRecord(string s) {
        
        int A = 0 ;
        int L = 0 ; 
        int maxL = 0 ; 

        for(int i = 0 ; i < s.size() ;i++){
            if(s[i]=='A'){
                A++ ;
                L=0 ;
                }
            else if(s[i]=='L'){
                L++ ;
                maxL=max(L,maxL);
            }
            else{
                L=0 ; 
            }
        }
        return(A<2&&maxL<3);
    }
};