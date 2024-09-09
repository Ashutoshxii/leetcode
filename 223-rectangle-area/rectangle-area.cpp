class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int ar1 = (ax2-ax1)*(ay2-ay1);
        int ar2 = (bx2-bx1)*(by2-by1);
        int ar3 = 0 ; 
        int overlen = min(by2,ay2) - max(by1 , ay1) ;
        int overbread = min(bx2,ax2) - max(bx1,ax1) ;
        if(overlen>0&&overbread>0){
            ar3=overlen*overbread ; 
        }
        return (ar1+ar2-ar3) ; 
    }
};