class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0 ; 
        int ten = 0 ;  
        for(int i = 0 ; i < bills.size() ; i++){
            if(bills[i]==10){
                if(five==0)return false ;
                else{
                    ten++;
                    five-- ;  
                }
            }
            else if(bills[i]==20){
                if(five==0){
                    return false ;
                }
                else if(ten==0){
                    if(five>2){
                        five-=3;
                    }
                    else{
                        return false ;
                    }
                }
                else{
                    ten-- ;
                    five-- ;  
                }
            }
            else{
                five++ ; 
            }
            
        }
        return true ; 
    }
};