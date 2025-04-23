class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> mp;
        int mx = 0;
        for(int i = 1; i <= n; i++){
            int k = 0, j = i;
            while(j){
                k+= j %10;
                j/=10;
            }
            mp[k]++;
            mx= max(mx, mp[k]);
        }
        int count = 0;
        for(auto pair: mp){
            if(pair.second == mx)
                count++;
        }
        return count;
    }

};