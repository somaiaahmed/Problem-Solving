class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size(), cnt = 0;
        for(int i = 0; i < n-2; i++){
            if(!nums[i]) {
                nums[i] = 1;
                nums[i+1] ^=1;
                nums[i+2] ^=1;
                cnt++;
            }   
        }
        
        return (count(nums.begin(), nums.end(), 1) == n) ? cnt : -1;
    }
};