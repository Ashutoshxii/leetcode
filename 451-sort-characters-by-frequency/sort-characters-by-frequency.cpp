class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp ;
        for(char i : s){
            mpp[i]++ ; 
        }
        vector<pair<int , char> >vec ;
        for(auto&i : mpp){
            vec.push_back({i.second,i.first});
        } 
        sort(vec.rbegin(),vec.rend()) ; 
        string st ="" ;
        for(auto&i : vec){
            st+= string(i.first,i.second) ; 
        }
        return st;
    }
};