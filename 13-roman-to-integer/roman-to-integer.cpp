class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanValues = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int total = 0 ; 
        int prev = 0 ; 

        

        for(char ch : s){
            int current = romanValues[ch] ; 
            
            if(prev<current){
                total+= current - 2*prev ;
            }
            else{
                total+=current ; 
            }
            prev = current ; 
            
        }
        return total ; 
    }
};