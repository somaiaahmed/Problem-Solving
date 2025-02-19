class Solution {
public:
    string ans = "";
    int gk;
    void solve(int n, string s){
        if(!n){
            gk--;
            if(!gk)
                ans = s;
            return;
        }
        for(char ch = 'a'; ch <= 'c'; ch++){
            if(s.size() && s.back() == ch) continue;
            s.push_back(ch);
            solve(n-1, s);
            s.pop_back();
        }
    }
    string getHappyString(int n, int k) {
        gk = k;
        solve(n, "");
        return ans;
    }
};