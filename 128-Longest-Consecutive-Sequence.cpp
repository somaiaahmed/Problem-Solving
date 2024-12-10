class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        // Step 1: Insert all numbers into an unordered_set for O(1) lookups
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longestStreak = 0;

        // Step 2: Iterate through the set and find the start of sequences
        for (int num : numSet) {
            // Only start counting if the number is the beginning of a sequence
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentStreak = 1;

                // Count consecutive numbers
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum++;
                    currentStreak++;
                }

                // Update the longest streak found
                longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
    }
};
