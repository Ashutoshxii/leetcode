class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        for(int i = 0 ; i  < k-1 ; i++){
            colors.push_back(colors[i]) ; 
        }

        int left = 0 ; 
        int right = 1 ;
        int length = colors.size() ; 
        int ans = 0 ; 
        while(right < length){
            if(colors[right]== colors[right-1]){
                left = right ; 
                right++ ; 
                continue ; 
            }
            right++ ; 
            if(right - left < k){
                continue ; 
            }

            ans++ ; 
            left++ ; 
        }
        return ans ; 
    }
};