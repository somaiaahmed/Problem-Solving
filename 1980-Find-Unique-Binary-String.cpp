class Solution {
public:
    string solve(string s, vector<string>& nums){
        if(s.size() == nums.size())
            return find(nums.begin(), nums.end(), s) == nums.end() ? s : "";
        return max(solve(s+"0", nums), solve(s+"1", nums));
    }
    string findDifferentBinaryString(vector<string>& nums) {
        return solve("", nums);
    }
};