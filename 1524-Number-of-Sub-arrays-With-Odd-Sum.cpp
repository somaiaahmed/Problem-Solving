class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int odd = 0, even = 1, sum = 0;
        for(auto num : arr){
            sum+=num;
            (sum&1) ? odd++ : even++;
        }
        
        return(1LL * odd * even % 1000000007);
    }
};