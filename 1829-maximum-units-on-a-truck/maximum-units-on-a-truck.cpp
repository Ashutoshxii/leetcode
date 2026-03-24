class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int trucksize) {
        sort(boxTypes.begin(),boxTypes.end(),[](vector<int>&a,vector<int>&b){
            return a[1]>b[1] ; 
        });
        int count = 0 ; 
        for(auto&i : boxTypes){
            int x = min(i[0],trucksize) ; 
            count+= x * i[1] ; 
            trucksize-= x ; 
            if(trucksize==0)break ; 
        }
        return count ;
    }

};