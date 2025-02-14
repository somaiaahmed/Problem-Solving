class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int ans = 0, n = nums.size();
        sort(nums.begin(), nums.end());
        for(auto num : nums){
            int curL = 1;
            long long x = 1LL* num * num;
            while(binary_search(nums.begin(), nums.end(), x)){
                curL++;
                x=x * x;
            } 
            ans = max(ans, curL);
        }
        return ans <2 ? -1 : ans;
    }
};