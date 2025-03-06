class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size(), a, b;
        bitset<2501> mp;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
               if(mp[grid[i][j]])
                    a = grid[i][j];
                mp[grid[i][j]] = 1;
            }
        }
        for(int i = 1; i <= n*n; i++){
            if(mp[i] == 0)  b = i;
        }

        return {a, b};
    }
};