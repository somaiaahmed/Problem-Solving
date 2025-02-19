class Solution {
public:
    string ans = "";
    int gk;
    bool solve(int n, string& s, int& k){
        if(!n){
            return --k == 0;
        }
        for(char ch = 'a'; ch <= 'c'; ch++){
            if(s.size() && s.back() == ch) continue;
            s.push_back(ch);
            if(solve(n-1, s, k)) return true;
            s.pop_back();
        }
        return false;
    }
    string getHappyString(int n, int k) {
        string ans = "";
        solve(n, ans, k);
        return ans;
    }
};