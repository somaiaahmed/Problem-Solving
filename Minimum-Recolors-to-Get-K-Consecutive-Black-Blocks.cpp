class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int white = count(blocks.begin(), blocks.begin() + k, 'W'), ans = white;
        for(int i = k; i < blocks.size(); i++){
            white+= (blocks[i] == 'W') - (blocks[i-k] == 'W');
            ans = min(white, ans);
        }
        return ans;
    }
};