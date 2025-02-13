class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int ones = accumulate(nums.begin(), nums.end(), 0);
        nums.insert(nums.end(), nums.begin(), nums.end());

        int curOnes = 0, maxOnes = 0;
        for(int i = 0; i < ones; i++){
            curOnes+= nums[i];
        }
        maxOnes = curOnes;

        // sliding window
        for(int i = ones; i < nums.size(); i++){
            curOnes += nums[i] - nums[i - ones];
            maxOnes = max(maxOnes, curOnes);
        }
        return ones - maxOnes;
        
    }
};

