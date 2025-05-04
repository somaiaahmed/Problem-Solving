class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int, int> count;
        for (auto& d : dominoes) {
            int a = min(d[0], d[1]);
            int b = max(d[0], d[1]);
            count[a * 10 + b]++;
        }
        
        int ans = 0;
        for (auto& p : count) {
            int c = p.second;
            ans += c * (c - 1) / 2;
        }
        return ans;
    }
};
