class Solution {
public:
    bitset<10> vis;
    string ans;

    bool solve(int idx,string& pattern){
        if(idx == pattern.size()) return ans.size() == idx+1;
        for(char c = '1'; c <= '9'; c++){
            if(vis[c]) continue;
            if(pattern[idx] == 'I' && c <= ans.back()) continue;
            if(pattern[idx] == 'D' && c >= ans.back()) continue;
            vis[c] = true;
            ans.push_back(c);
            if(solve(idx +1, pattern)) return true;
            vis[c] = false;
            ans.pop_back();

        }
        return false;
    }
    string smallestNumber(string pattern) {
        for(char c = '1'; c <= '9'; c++){
            vis[c] = true;
            ans.push_back(c);
            if(solve(0, pattern)) return ans;
            vis[c] = false;
            ans.pop_back();

        }
        return "-1";
    }
};