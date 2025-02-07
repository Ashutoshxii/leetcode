class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int cur = 0;
        for(int i = 0; i < k; i++){
            if(blocks[i] == 'W')cur++;
        }
        int res = cur;
        for(int i = k; i < blocks.size(); ++i){
            if(blocks[i] == 'W')cur++;
            if(blocks[i-k] == 'W')cur--;
            res = min(res, cur);
        }
        return res;
    }
};