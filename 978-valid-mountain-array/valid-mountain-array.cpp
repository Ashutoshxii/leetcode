class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3){
            return false ; 
        }
        int i = 0 ;
        while(i<arr.size()-1&&arr[i+1]>arr[i]){
            i++ ; 
        }
        if(i==0||i==arr.size()-1){
            return false ;
        }
        while(i<arr.size()-1&&arr[i+1]<arr[i]){
            i++ ;
        }
        if(i == arr.size()-1 ){
            return true ;}
        else {
            return 0 ; 
        }
    }
};