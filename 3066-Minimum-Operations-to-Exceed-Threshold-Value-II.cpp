class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        priority_queue<long long, vector<long long>, greater<long long>> pr;
        for(auto num : nums){
            pr.push(num);
        }
        while(pr.top() < k){
            long long a = pr.top(); pr.pop();
            long long b = pr.top(); pr.pop();
            pr.push(min(a, b) * 2 + max(a, b));
            ans++;

        }
        return ans;
    }
};