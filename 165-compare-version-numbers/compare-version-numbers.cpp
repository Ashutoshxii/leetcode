class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n = version1.size() ; int m = version2.size() ; 
        int i = 0 ; int j = 0 ; 
        while(i<n&&j<m){
            int x = 0 ;
            int y = 0 ; 
            string v1 = "" ; 
            string v2 ="" ; 
            if(version1[i]=='.')i++ ;
            if(version2[j]=='.')j++ ; 
            while(i<n&&version1[i]!='.'){
                v1 += version1[i] ; 
                i++ ; 
            }
            while(j<m&&version2[j]!='.'){
                v2 += version2[j] ; 
                j++ ; 
            }
            x = stoi(v1) ;
            y = stoi(v2) ; 
            if(x>y)return 1 ;
            else if(x<y)return -1 ; 

        }
        if(i==n){
            while(j < m ){
                if(version2[j]!='.'&&version2[j]!='0')return -1 ; 
                j++ ; 
            }
        }
        else{
            while(i < n ){
                if(version1[i]!='.'&&version1[i]!='0')return 1 ; 
                i++ ; 
            }
        }
        return 0 ; 
    }
};