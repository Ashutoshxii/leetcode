class Solution
{
    public:
        bool check(stack<char> st , char ch ){
            if(st.top()=='{'&&ch=='}'){
                return true;
            }
            else if(st.top()=='['&&ch==']'){
                return true;
            }
            if(st.top()=='('&&ch==')'){
                return true;
            }
            return false ; 
        }
        bool isValid(string s)
        {
            int n = s.size() - 1;
            int k = n;
            stack<char> st;
            for (int i = 0; i <= n; i++)
            {
                if (s[i] == '[' || s[i] == '(' || s[i] == '{')
                {
                    st.push(s[i]);
                }
                else
                {
                    if (st.empty())
                    {
                        return false;
                    }
                    else if(check(st,s[i])){
                            st.pop();
                    }
                    else{
                        return false ; 
                    }
                   
                }
            }
            if (st.empty())
            {
                return true;
            }
            return false;
        }
};