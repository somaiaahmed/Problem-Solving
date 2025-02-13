class Solution {
public:
    bool ok(vector<int>& nums, int k, int md){
        int n = nums.size();
        for(int i = 0; i <= n - md; i++)
            if(nums[i] + k >= nums[i + md - 1] - k)
                return true;
        return false;
    }
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int st = 1, ed = nums.size(), cur = -1, md;
        while(st <= ed){
            md = (st + ed) >> 1;
            if(ok(nums, k, md)){
                cur = md;
                st = md + 1;
            }
            else
                ed = md - 1;

        }
        return cur;

    }
};