class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0, n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) { // Compare current with next (circular)
                count++;
            }
            if (count > 1) return false; // More than one break is invalid
        }
        
        return true;
    }
};
