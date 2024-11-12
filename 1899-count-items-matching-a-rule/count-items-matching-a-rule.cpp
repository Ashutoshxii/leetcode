class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int index = -1 ; 
        if(ruleKey == "color"){
            index = 1 ; 
        }
        else if(ruleKey == "type"){
            index = 0 ; 
        }
        else{
            index = 2 ; 
        }
        int count = 0 ; 
        for(int i = 0 ; i < items.size() ; i++){
            if(items[i][index] == ruleValue){
                count++ ; 
            }
        }
        return count ; 
    }
};