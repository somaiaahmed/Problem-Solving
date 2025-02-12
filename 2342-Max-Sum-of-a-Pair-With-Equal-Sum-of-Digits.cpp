class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n = nums.size(), ans = -1;
        map <int,int> mp;
        for(auto n:nums){
            int sum = 0;
            int temp = n;
            while(n){
                sum+=n%10;
                n/=10;
            }
            if(!mp.count(sum)) mp[sum] = temp;
            else{
                ans = max(ans, mp[sum] + temp);
                mp[sum] = max(mp[sum], temp);
            }
        }
        
        return ans;
    }
};