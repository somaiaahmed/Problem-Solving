class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n = queries.size();
        unordered_map<int,int> colorMap,ballMap;
        vector<int> res(n);
        for(int i=0;i<n;i++){
            int ball = queries[i][0], color = queries[i][1];
            if(ballMap.find(ball) != ballMap.end()){
                int prevColor = ballMap[ball];
                colorMap[prevColor]--;

                if(colorMap[prevColor] == 0) 
                    colorMap.erase(prevColor);
            }
            ballMap[ball] = color;
            colorMap[color]++;
            res[i] = colorMap.size();
        }
        return res;
    }
};