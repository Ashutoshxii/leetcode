class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        
        int slowest = INT_MIN ;
        int fastest = INT_MAX ; 
       
        
        for(int i : ranks){
            slowest = max(i , slowest) ;
            fastest = min(i,fastest) ; 
            
        }

        vector<int>freq(slowest+1) ;
        for(int rank : ranks){
            freq[rank]++ ; 
        }

        long long low = 1 ;
        long long high = 1LL *fastest*cars*cars ; 

        while(low<high){
            long long mid = low + (high-low)/2 ;
            long long repaired = 0 ; 

            for(int rank = 1;  rank<=slowest ; rank++){
                repaired+= freq[rank] * (long long)sqrt(mid / (long long)rank);

            }
            if(repaired>= cars){
                high = mid ; 
            }
            else{
                low = mid+1 ;
            }
        }
        return low ; 
    }
};