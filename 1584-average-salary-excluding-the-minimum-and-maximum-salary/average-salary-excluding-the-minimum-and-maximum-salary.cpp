class Solution {
public:
    double average(vector<int>& salary) {
        int maxi = INT_MIN ; 
        int mini = INT_MAX ;
        double sum = 0 ; 
        int n = salary.size() - 2 ; 
        for(int i : salary){
            sum+=i ;
            if(i>maxi)maxi = i ;
            if(i<mini)mini = i ;
        }
        sum = (sum - maxi - mini )/n;
        return sum ; 
    }
};