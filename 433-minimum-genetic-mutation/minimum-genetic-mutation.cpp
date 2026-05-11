class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        set<string>st(bank.begin(),bank.end()) ; 
        queue<string>q ; 
        int count  = 0 ; 
        q.push(startGene) ; 

        while(!q.empty()){
            int size = q.size() ; 
            count++  ; 
            while(size--){
                string node = q.front() ; q.pop() ; 
                if(node==endGene)return count-1 ; 
                for(char&ch:node){
                    char realch = ch ; 
                    for(char c = 'A' ; c<= 'Z'; c++){
                        ch = c ;
                        if(st.count(node)){
                            st.erase(node) ; 
                            q.push(node) ; 
                        }
                    }
                    ch = realch ; 
                }
            }
        }
        return -1 ; 
    }
};