class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long badCount = 0;
        unordered_map<int,int> diffMap;
        for(int i = 0; i < nums.size(); i++){
            int diff = i - nums[i];
            int good = diffMap[diff];
            badCount += i -good;
            diffMap[diff] = good + 1;
            
        }
        return badCount;
    }
};