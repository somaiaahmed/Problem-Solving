class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> x;
        for(char c:s)
        x[c]++;
        for(char c:t)
        x[c]--;
        for(auto &pair:x)
        {
            if(pair.second!=0)
            return false;
        }
        return true;
    }
};