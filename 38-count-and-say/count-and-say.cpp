class Solution {
public:

    string compressor(string k ){
     
        string ans = "" ; 
        // if(k.size()==1){
        //     return "1"+k ; 
        // }
        int i = 0 ; 
         while(i < k.size()) {
            int count = 1 ;
            while(i+1 < k.size() && k[i]==k[i+1]){
                count++ ; 
                i++ ; 
            }
    
            ans += to_string(count) + k[i];
   
            i++;
        }
        return ans ; 
    }

    string RLE(int n){
        if(n==1){
            return "1" ; 
        }
        
        return compressor(RLE(n-1)) ; 
         
    }
    string countAndSay(int n) {
         return RLE(n) ; 
    }
};