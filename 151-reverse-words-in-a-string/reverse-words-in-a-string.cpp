class Solution {
public:
    string reverseWords(string s) {
         
        int i = 0 ; 
        int j = s.size()-1 ; 
        while(s[i]==' '){
            s.erase(i,1);
            i++ ; 
        }
        while(s[j]==' '){
            s.pop_back() ; 
            j-- ; 
        }

        i = 0 ; 
        j = s.size()-1 ; 
        // while(i<j)
        while(i<=j){
            swap(s[i],s[j]);
            i++ ;
            j-- ; 
        }
        i = 0 ; 
        j = 0 ;
        int k  = 0 ; 
        while(k<s.size()){
            while(j<s.size()&&s[j]!=' '){
                j++ ; 
            }
             k = j ;
             j-- ; 
            while(i<=j){
                swap(s[i],s[j]);
                i++ ;
                j-- ; 
            }
            j = k+1 ;
            i = k+1 ; 
        }
        i = 0 ;
        while(i<s.size()){
            if(s[i]==' '&&s[i+1]==' '){
                s.erase(i,1);
                // i-- ; 
            }
            else{i++ ; }
        }
        i = 0 ; 
        while(s[i]==' '){
            s.erase(i,1);
                i++ ;
        }
        i = s.size() - 1 ; 
        while(s[i]==' '){
            s.erase(i,1);
                i-- ;
        }
        return s ; 
    }
};