class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n = nums.size(), ans = -1;
        vector<pair<int,int>> v;
        v.reserve(n);
        for(auto n:nums){
            int sum = 0;
            int temp = n;
            while(n){
                sum+=n%10;
                n/=10;
            }
           v.push_back({sum,temp});
        }
        sort(v.begin(),v.end());
        for(int i = 1; i<v.size();i++){
            if(v[i].first == v[i-1].first)
                ans = max(ans, v[i].second + v[i-1].second);  
        }
        return ans;
    }
};