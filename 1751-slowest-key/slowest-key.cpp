class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int j  = 0 ; 
        int n = releaseTimes.size() ; 
        char ans = keysPressed[0] ; 
        int maxi = releaseTimes[0] ; 
        for(int i = 1 ; i< n; i++){
         
          
                int temp = releaseTimes[i] - releaseTimes[i-1] ; 
                if(temp==maxi){
                    ans = max(ans,keysPressed[i]) ; 
                } 
                else if(temp > maxi){
                    maxi = temp ; 
                    ans = keysPressed[i] ; 
                }

            
        }
            return ans ; 
    }
};