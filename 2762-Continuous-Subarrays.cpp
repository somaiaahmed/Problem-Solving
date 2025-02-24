class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        long long sum = 0;
        int l = 0, r = 0, n = nums.size();
        map<int, int>mp; 
        while(r < n){
            mp[nums[r++]]++;
            while(mp.rbegin()->first - mp.begin()->first > 2){
                mp[nums[l]]--;
                if(mp[nums[l]] == 0)
                    mp.erase(nums[l]);
                l++;
            }
            sum+= r - l;
        }
        return sum;
        
    }
};