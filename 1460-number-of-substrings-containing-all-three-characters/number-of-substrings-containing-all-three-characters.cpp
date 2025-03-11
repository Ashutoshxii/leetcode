class Solution {
public:
    int numberOfSubstrings(string s) {
        int i = 0 ; 
        int j = 0 ; 
        int n = s.size() ; 
        int count = 0 ; 
        int a = 0 ; 
        int b = 0 ; 
        int c = 0 ; 
        while(j < n){   
                if(s[j]=='a')a++ ;
                else if(s[j]=='b')b++ ;
                else if(s[j]=='c')c++ ; 
                j++ ;        
            while(a > 0 && b> 0 && c>0){
                count += (n-j+1) ; 

                if(s[i]=='a')a-- ;
                else if(s[i]=='b')b-- ;
                else if(s[i]=='c')c-- ; 
                i++ ; 
            }           
        }
        return count ; 
    }
};