class Solution {
public:
    long long solve(vector<int>&piles,int&x){
        long long  total = 0 ; 
        for(int&i : piles){
            total += (i+x-1)/x;
            // if(total > h)
        }
        return total ; 
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size() ; 
        int s = 1 ; 
        int e = *max_element(piles.begin(),piles.end()) ; 
        int mid = s + (e - s) / 2;
        int ans = e ; 
        while(s <= e ){
            mid = s + (e - s) / 2; ; 
            if(solve(piles,mid)<=h){
                ans = mid ; 
                e = mid-1 ; 
            }
            else{
                s = mid+1 ; 
            }
        }
        return ans ; 
    }
};