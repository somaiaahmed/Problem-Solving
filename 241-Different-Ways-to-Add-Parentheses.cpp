class Solution {
public:
    vector<int> memo[21][21];
    vector<int> solve(int i, int j, string& s){
        if(i == j) return {s[i] - '0'};
        if(i+1 == j) return {(s[i] - '0') * 10 + s[j] - '0'};
        if(memo[i][j].size()) return memo[i][j];
        vector<int> v;
        for(int k = i+1; k<j; k++){
            char op = s[k];
            if(op == '+' || op == '-' || op == '*'){
                vector<int> left = solve(i, k-1, s);
                vector<int> rigth = solve(k+1, j, s);
                for(int l :left)
                    for(int r : rigth)
                        if(op == '+') v.push_back(l+r);
                        else if(op == '-') v.push_back(l-r);
                        else v.push_back(l*r);
            }
        }
        return memo[i][j] = v;
    }
    vector<int> diffWaysToCompute(string expression) {
        return solve(0, expression.size()-1, expression);
    }
};