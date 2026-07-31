class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size() ; 
        int x = 1 ; int count = 0 ;
        for(int i = 0 ; i < n ;i++){
            if(i%8==0&&i!=0)x++ ;
            count+= x ; 
        } 
        return count ;
    }
};