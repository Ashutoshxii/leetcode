class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        vector<string> vec ;
        for(int i : nums){
            vec.push_back(to_string(i)) ;
        }

        sort(vec.begin(),vec.end(),[](string a ,string b){
            return a + b > b + a ;
        });
        if(vec[0]=="0")return "0" ; 
        string ans ="" ;
        for(string i : vec){
            ans+=i ; 
        }

        return ans ; 




        // sort(nums.begin(),nums.end()) ;
        // string st  ;
        // for(int i = nums.size()-1 ; i >= 0 ; i--){
        //     string k = to_string(nums[i]);
        //     st  = st+ k ;
        // }
        // return st ; 
    }
};