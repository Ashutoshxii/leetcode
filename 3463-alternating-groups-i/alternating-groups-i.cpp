class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int c = 0 ; 
        int n = colors.size() - 1 ;
        for(int i = 0 ; i <= n; i++){
            if(i==0){
                if(colors[0]!=colors[1]&&colors[0]!=colors[n]){
                    c++;
                    // cout<<i<<endl;
                }

            
            }
            else{
                if(colors[i]!=colors[(i+1)%(n+1)]&&colors[i]!=colors[i-1]){
                c++ ; 
                    // cout<<i<<endl;
                }
            }
        }
        return c ;
         

    }
};