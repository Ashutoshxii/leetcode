class Solution {
public:
    int minimumSum(int num) {
        vector<int>v ; 

        for(int i = 0 ; i <  4 ; i ++){
            v.push_back(num%10) ;
            num/=10 ; 
        }
        sort(v.begin(),v.end()) ; 
        int n1 = v[0]*10 + v[2] ;
        int n2 = v[1]*10 + v[3] ;
        return n1+n2 ;  
    }
};