class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size(), flips = 0;
        for(int i = 0; i < n; i++){
           flips += !((flips&1) ^ nums[i]);
        }
        return flips;
    }
};