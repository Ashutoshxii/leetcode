class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int maxi = 0 ; 
        int i = 0 ; 
        while(seats[i]==0){
            i++ ; 
        }
        maxi = i ;
        int count = 0 ; 
        for(int j = i ; j < seats.size() ;j++){
            if(seats[j]==1){
                maxi = max(maxi, (count+1)/2) ; 
                count = 0 ; 
            }
            else{
                count++ ; 
            }
        }
         i = seats.size()-1 ;
        count = 0 ; 
        while(seats[i]==0){
            i-- ; 
            count++ ; 
        }
        maxi = max(maxi, count) ; 
        return maxi ; 
    }
};