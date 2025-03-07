class Solution {
public:
    bool isPrime(int n){
        if(n <= 1) return false;
        if(n <= 3) return true;
        if(n % 2 == 0 || n % 3 == 0) return false;
        for(int i = 5; i*i <= n; i++)
            if(n%i == 0 || n % (i+2) == 0) return false;
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int> prime;
        int num1 = -1,num2 = -1, mn = 1e9;
        for(int i = left; i <= right; i++){
            if(isPrime(i)) prime.push_back(i);
        }
        if(prime.size()){
            for(int i = 0; i < prime.size() - 1; i++){
                num1 = prime[i];
                num2 = prime[i+1];
                mn = min(mn, prime[i+1] - prime[i]); 
            }
            for(int i = 0; i < prime.size() - 1; i++){
                num1 = prime[i];
                num2 = prime[i+1];
                if(mn == prime[i+1] - prime[i]) return {prime[i], prime[i+1]}; 
            }
        }
        return {-1, -1};
    }
};