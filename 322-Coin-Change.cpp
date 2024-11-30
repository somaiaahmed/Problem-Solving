class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, INT_MAX);
        dp[0] = 0;
        for(int i = 1; i <= amount ; i++){
            for (const auto& c : coins){
                if(i-c >=0 && dp[i-c]!= INT_MAX){
                    dp[i]= min(dp[i], 1+ dp[i-c]);
                }
            }
        }
        return dp[amount]== INT_MAX? -1: dp[amount];


    }
};