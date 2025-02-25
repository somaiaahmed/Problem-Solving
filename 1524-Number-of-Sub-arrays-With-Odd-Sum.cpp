class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        int count = 0, prefixSum = 0;
        int odd= 0, even = 1;
        for(auto num : arr){
            prefixSum+=num;
            if(prefixSum % 2 == 0){
                count += odd;
                even++;
            }
            else{
                count+=even;
                odd++;
            }
            count %= MOD;
        }
        return count;
    }
};