class Solution {
public:
    bitset<8> vis;
    unordered_set<string> st;
    void solve(string s, string cur){
        st.insert(cur);
        for(int i = 0; i<s.size(); i++){
            if(vis[i]) continue;
            vis[i] = 1;
            cur.push_back(s[i]);
            solve(s, cur);
            cur.pop_back();
            vis[i] = 0;
        }
    }
    int numTilePossibilities(string tiles) {
        solve(tiles, "");
        return st.size() - 1;

    }
};