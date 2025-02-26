class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum = 0, mx = 0, mn = 0;
        for(auto num: nums){
            sum+=num;

            mn = min(sum, mn);
            mx = max(sum, mx);
            
        }
        return mx - mn;
    }
};