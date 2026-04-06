class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string>avail(wordList.begin(),wordList.end()) ;
       
        queue<string>q ;
        q.push(beginWord) ; 
        int count = 0 ; 

        while(!q.empty()){
            int size = q.size() ; 
            count++ ; 
            
            while(size--){
                string word = q.front() ; q.pop() ; 

                if(word==endWord)return count ; 
                
                for(char&h : word){
                    char real = h ; 
                    for(char ch = 'a' ; ch<= 'z' ; ch++  ){
                        h = ch ; 
                        if(avail.count(word)>0){
                            q.push(word) ; 
                            avail.erase(word) ; 
                        }
                    }
                    h = real ; 
                }
            }
        }
        return 0 ; 
    }
};