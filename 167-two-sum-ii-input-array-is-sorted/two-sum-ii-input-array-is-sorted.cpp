class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans ; 
        int n = numbers.size()-1 ; 
        int j = 0 ; 
        int k = n ; 
        while(j<k){
            int l = numbers[j]+numbers[k] ; 
            if(numbers[j]+numbers[k]==target){
                ans.push_back(j+1);
                ans.push_back(k+1);
                return ans ; 
            }
            else if (numbers[j]+numbers[k]>target){
                k--;
            }
            else{j++;}
        }
        return ans ; 
    }
};