    class Solution {
    public:
        int maximumPopulation(vector<vector<int>>& logs) {
            map<int,int>mpp ; 
            int maxi = 0 ; 
            int year =0; 
            for(auto &i : logs){
                for(int j = i[0] ; j < i[1] ; j++){
                    mpp[j]++ ;
                }
                
            }
            for(auto&i:mpp){
                if(i.second > maxi){
                    maxi = i.second ;
                    year = i.first ; 
                }
            }
        
            return year; 
        }
    };