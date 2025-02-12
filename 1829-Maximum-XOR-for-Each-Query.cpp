class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        int xr = 0;
        int mx = (1<<maximumBit)-1;
        for(int i = 0; i<n;i++){
            xr^=nums[i];
        }
        for(int i = 0 ;i<n;i++){
            int k = xr ^ mx;
            xr^=nums[n-i-1];
            nums [n-1-i] = k;
        }
        reverse(nums.begin(),nums.end());
        return nums;

    }
};