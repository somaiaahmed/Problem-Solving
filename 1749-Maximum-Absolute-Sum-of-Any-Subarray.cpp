class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum = 0, mx = 0, mn = 0, ans = 0;
        for(auto num: nums){
            sum+=num;

            ans = max(ans, sum);
            ans = max(ans, -sum);

            mx = max(mx, sum);
            mn = min(mn, sum);

            ans = max(ans, abs(sum - mx));
            ans = max(ans, abs(sum - mn));
        }
        return ans;
    }
};