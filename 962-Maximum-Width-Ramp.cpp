class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        vector<int> index(n);
        iota(index.begin(),index.end(),0);

        sort(index.begin(), index.end(), [&](int i, int j){
            if(nums[i] == nums[j])
                return i<j;
            return nums[i] < nums[j];
        });

        int minidx = n;
        for(int i = 0; i < n; i++){
            minidx = min(minidx, index[i]);
            ans = max(ans, index[i] - minidx);
        }


        return ans;
    }
};