class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.size();
        vector<int> v(3);
        for(auto c : s)
            v[c-'a']++;
        if(*min_element(v.begin(), v.end()) < k)
            return -1;

        int l = 0, r = 0, ans = 0;
        while(r < n){
            v[s[r] - 'a']--;
            while(*min_element(v.begin(), v.end()) < k){
                v[s[l] - 'a']++;
                l++;
            }
            ans = max(ans, r-l+1);
            r++;
        }
        return n - ans;
    }
};