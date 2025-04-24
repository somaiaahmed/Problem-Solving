class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        int dis = mp.size(), c = 0, i= 0,j=0;
        mp.clear();

        while(i<n && j<n){
            mp[nums[j]]++;
            while(i<=j && mp.size()==dis){
                c+=n-j;
                mp[nums[i]]--;
                if(mp[nums[i]] == 0)
                    mp.erase(nums[i]);
                i++;
            }
            j++;
        }
        return c;

    }
};