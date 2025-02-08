class Solution {
public:
    int firstUniqChar(string s) {
        queue<int> q ; 

        vector<int> vec(26,0) ;

        for(int i = 0 ; i < s.size() ; i++){
            q.push(i) ;
            vec[s[i]-'a']++ ;
        }

        while(!q.empty()&&vec[s[q.front()]-'a']>1){
             q.pop() ; 
        }
        if(q.empty()){
            return -1;
        }
        return q.front() ; 


    }
};