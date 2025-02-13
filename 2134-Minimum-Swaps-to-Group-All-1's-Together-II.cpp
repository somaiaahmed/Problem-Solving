class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int len = accumulate(nums.begin(), nums.end(), 0);

        for(int i = 0; i < n; i++){
            nums.push_back(nums[i]);
        }
        for(int i = 1; i < nums.size(); i++){
            nums[i] += nums[i - 1];
        }
        int ones = (!len ? 0 : nums[len - 1]);
        int ans = len - ones;
        for(int i = len; i < nums.size(); i++){
            int zeros = len - (nums[i] - nums[i - len]);
            ans = min(ans, zeros);
        }
        return ans;
        
    }
};