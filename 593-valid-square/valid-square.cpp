class Solution {
public:
    int dist(vector<int>&v,vector<int>&p){
        int x1 = v[0] ; int x2 = p[0] ;
        int y1 = v[1] ; int y2 = p[1] ;
        return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) ;
        
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        set<int>st ; 
        st.insert(dist(p1,p2)) ; 
        st.insert(dist(p1,p3)) ; 
        st.insert(dist(p1,p4)) ; 
        st.insert(dist(p2,p3)) ; 
        st.insert(dist(p2,p4)) ; 
        st.insert(dist(p3,p4)) ;
        if(st.size()!=2)return false ;
        if(*st.begin()==0)return false ;
        return true ; 
    }
};