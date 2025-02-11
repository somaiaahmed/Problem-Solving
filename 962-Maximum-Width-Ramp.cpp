class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        stack<int> stk;
        for(int i = 0; i < n; i++){
            if(stk.empty() || nums[stk.top()] > nums[i])
                stk.push(i);
        }
        for(int j = n-1; j >=0; j--){
            while(!stk.empty() && nums[stk.top()] <= nums[j]){
                ans = max(ans, j - stk.top()),stk.pop();
            }
        }
        return ans;
        
    }
};