class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0 ; 
        for(string &st : logs){
            if(st=="../"){
                if(count>0)count-- ;
                else count = 0 ; 
            }
            else if(st=="./")continue ;
            else count++ ; 
        }
        return  count  ; 
    }
};