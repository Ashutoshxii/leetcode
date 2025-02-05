class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1 ;
        stack<char>s2 ;

        for(char i : s){
            if(i=='#'&&!s1.empty())s1.pop();
            else{
                if(i!='#')s1.push(i);
            }
        }
        s ="" ;

        for(char i : t){
            if(i=='#'&&!s2.empty())s2.pop();
            else{
                if(i!='#')s2.push(i);
            }
        }
        t="";
        while(!s1.empty()){
            s+=s1.top();
            s1.pop() ;
        }
        while(!s2.empty()){
            t+=s2.top();
            s2.pop() ;
        }
        cout<<s<<"  "<<t;
        return (s==t);
    }
};