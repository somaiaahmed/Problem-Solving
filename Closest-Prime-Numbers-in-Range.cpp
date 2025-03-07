class Solution {
public:
    bool isPrime(int n){
        if(n == 2 || n == 3)return true;
        if(n % 2 == 0 || n % 3 == 0 || n <= 1)return false;
        for(int i = 5; i*i <= n; i+= 6)
            if(n % i == 0 || n % (i+2) == 0)return false;
        return true;
    } 
    vector<int> closestPrimes(int left, int right) {
        vector<int> prime, ans(2);
        int mn = 1e9;
        for(int i = left; i <= right; i++){
            if(isPrime(i)) prime.push_back(i);
        }
        if(prime.size() < 2) return {-1, -1};

        for(int i = 0; i < prime.size() - 1; i++){
            if(prime[i+1] - prime[i] < mn){
                mn = prime[i+1] - prime[i];
                ans = {prime[i], prime[i+1]}; 
            }
        }
        return ans;
    }
};