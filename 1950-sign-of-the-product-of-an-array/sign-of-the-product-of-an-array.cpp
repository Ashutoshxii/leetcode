class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count = 0 ; 
        for(int i : nums){
            if(i==0)return 0 ;
            else if(i<0)count++ ;
        }
        if(count%2==0)return 1 ;
        return -1 ; 
    }
};