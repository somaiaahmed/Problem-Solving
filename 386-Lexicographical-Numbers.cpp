class Solution {
public:
    vector<int> v;
    void solve(int x, int& n){
        if(x > n) return;
        v.push_back(x);
        for(int i = 0; i < 10; i++)
            solve(x*10+i, n);
    }
    vector<int> lexicalOrder(int n) {
        for(int i = 1; i<=9; i++)
            solve(i, n);
        return v;
    }
};