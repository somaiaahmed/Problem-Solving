class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int sum = 0, i = 0, ans = 0;
        sort(banned.begin(),banned.end());
        for(int i = 1; i <= n; i++){
            if(!binary_search(banned.begin(), banned.end(), i) && sum + i <= maxSum){
                sum+=i;
                ans++;
            }
            
          
        }
        return ans;
    }
};