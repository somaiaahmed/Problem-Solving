class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& x, vector<vector<int>>& y) {
        // unordered_map<int, int> mp;
        vector<vector<int>> merge;
        int i = 0, j = 0, k = 0;
        int n = x.size(), m = y.size();
        while(i < n && j < m){
            if(x[i][0] == y[j][0]) merge.push_back({x[i][0], x[i++][1] + y[j++][1]});
            else if(x[i][0] < y[j][0]) merge.push_back(x[i++]);
            else merge.push_back(y[j++]);
            // k++;
        }
        while(i<n) merge.push_back(x[i++]);
        while(j<m) merge.push_back(y[j++]);

        return merge;

    }
};