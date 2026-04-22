class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int lefty = 0 ;
        int righty = 0 ;
        if(colors.size()<2)return 0 ;  
        int i = 0 ; int n = colors.size() ;  
        while(i < n && colors[i]==colors.back()){
            i++  ; 
        }
        lefty = n - i-1 ; 
        i = n-1 ; 
        while( i >= 0 && colors[i] == colors[0]){
            i-- ; 
        }
        righty = i ; 
        return max(lefty,righty) ; 
    }
};