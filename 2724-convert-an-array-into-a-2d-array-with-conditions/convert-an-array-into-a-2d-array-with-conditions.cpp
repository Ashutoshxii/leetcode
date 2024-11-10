class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans ; 
        unordered_map<int,int> mpp ;
        for(int i : nums){
            mpp[i]++ ; 
        }
        while(true){
            
                vector<int> vec ; 
                for( auto & pairy : mpp){
                    if(pairy.second>0){
                        vec.push_back(pairy.first);
                        pairy.second-- ; 
                    }
                }
                if(vec.empty())break ; 
                ans.push_back(vec) ; 
        
        }
        return ans ; 
    }
};