class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int mn = 1e9, n = blocks.size();
        for(int i = 0; i <= n - k; i++){
            int white = 0;
            for(int j = 0; j < k; j++){
                if(blocks[i+j] == 'W')
                    white++;
            }
            mn = min(mn, white);

        }
        return mn;
    }
};