class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score = 0 ; int counter = 0 ;
        for(string&i: events){

            if(i=="W"){
                counter++ ;
            }
            else if(i=="WD"||i=="NB"){
                score++ ; 
            }
            else{
                int x = stoi(i) ; 
                score+= x ; 
            }
            if(counter==10)break ;
        }
        return {score,counter} ; 
    }
};