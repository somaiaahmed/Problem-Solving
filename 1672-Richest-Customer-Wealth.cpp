class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> rich;
        for(int i =0;i<accounts.size();i++){
            int sum=0;
            for(int j=0; j<accounts[0].size();j++){
                sum+=accounts[i][j];
            }
            rich.push_back(sum);
        }
        sort(rich.rbegin(),rich.rend());
        return(rich[0]);
        

    }
};