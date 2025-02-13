class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        priority_queue<int, vector<int>, greater<int>>pr(nums.begin(), nums.end());
        while(pr.top() < k){
            ans++;
            pr.pop();
        }
        return ans;
    }
};