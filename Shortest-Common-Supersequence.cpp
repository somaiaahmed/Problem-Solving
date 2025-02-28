class Solution {
public:
    int dp[1001][1001];
    int solve(int i, int j, string &a, string& b){
        if(i == a.size()) return b.size() - j;
        if(j == b.size()) return a.size() - i;

        int &ret = dp[i][j];
        if(~ret) return ret;
         ret = 1e9;
        if(a[i] == b[j]){
           ret = min(ret, solve(i + 1, j + 1, a, b) + 1);
        }
        else{
            ret = min(ret, solve(i + 1, j, a, b) + 1);
            ret = min(ret, solve(i, j + 1, a, b) + 1);
        }
        return ret;

    }
    string print(int i, int j, string &a, string& b){
        if(i == a.size()) return b.substr(j);
        if(j == b.size()) return a.substr(i);

        int ret = dp[i][j];
        
        if(a[i] == b[j] && ret == solve(i + 1, j + 1, a, b) + 1)
           return a[i] + print(i+1, j+1, a, b);
        else if(ret == solve(i + 1, j, a, b) + 1)
            return a[i] + print(i+1, j, a, b);
        else if(ret == solve(i, j+1, a, b) + 1)
            return b[j] + print(i, j+1, a,b);
        else 
            return "";
    }
    string shortestCommonSupersequence(string a, string b) {
        memset(dp, -1, sizeof dp);
        cout<<solve(0,0,a,b);
        return print(0, 0, a, b);
    }
};