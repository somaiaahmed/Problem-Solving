class Solution {
public:
    vector<string> v;
    void solve(int n, string s){
        if(!n){
            v.push_back(s);
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
        solve(n, "");
        return v.size() >= k ? v[k-1] : "";
    }
};