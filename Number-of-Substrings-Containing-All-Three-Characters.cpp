class Solution {
public:
    int numberOfSubstrings(string s) {
        int vis[3] = {}, l = 0, cnt = 0, n = s.size();
        for(int r = 0; r < n; r++){
            vis[s[r] - 'a']++;
            while(vis[0] && vis[1] && vis[2]){
                cnt+=n-r;
                vis[s[l] - 'a']--;
                l++;
            }
        }
        
        return cnt;
    }
};