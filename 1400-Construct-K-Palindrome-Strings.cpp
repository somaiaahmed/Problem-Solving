class Solution {
public:
    bool canConstruct(string s, int k) {
        int odd = 0;
        if(s.size() < k)
            return false;
        unordered_map<char,int>map;
        for(auto c : s){
            map[c]++;
        }
        for(auto pair : map){
            if(pair.second % 2!=0)
                odd++;
        }
        if(odd > k)
            return false;
        return true;
    }
};