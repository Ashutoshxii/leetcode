class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0)return 0 ; 
        long long ans = 0 ; 
        string frag = "" ; 
        int k = n ;
        long long sum = 0 ; 
        while(k>0){
            int x = k%10 ; 
            if(x!=0){
                frag+= x + '0' ; 
            sum += x ; 
            }
            k=k/10 ;

        }
        reverse(frag.begin(),frag.end()) ; 
        ans = stoll(frag) ; 
        ans*= sum ; 
        return ans ;
    }
};