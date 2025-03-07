class Solution {
public:
    bitset<1000001> vis;
    void seive(int n){
        vis[0] = vis[1] = 1;
        for(int i = 2; i*i <= n; i++){
            if(!vis[i])
                for(int j = i+i; j <= n; j+=i) vis[j] = 1;
        }
    }
    vector<int> closestPrimes(int left, int right) {
        seive(right);
        int mn = 1e9, a = -1, b = -1, lst = -1;
        for(int i = left; i <= right; i++){
            if(vis[i]) continue;
            if(lst != -1 && i - lst < mn){
                mn = i - lst;
                a = lst, b = i;
            }
            lst = i;
        }
       return {a, b};
    }
};