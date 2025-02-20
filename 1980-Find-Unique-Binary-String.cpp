class Solution {
public:
    bool solve(string& s, vector<string>& nums){
        if(s.size() == nums.size())
            return find(nums.begin(), nums.end(), s) == nums.end() ? true : false;
        s.push_back('0');
        if(solve(s, nums)) return true;
        s.pop_back();

        s.push_back('1');
        if(solve(s, nums)) return true;
        s.pop_back();
        return false;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        string s;
        solve(s, nums);
        return s;
    }
};