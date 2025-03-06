class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int,int> mp;
        vector<int>ans;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                mp[grid[i][j]]++;
            }
        }
        int a,b;
        for(int i = 1; i <= n*n; i++){
            if(mp[i] == 2)  a = i;
            if(mp[i] == 0)  b = i;
        }
        
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};