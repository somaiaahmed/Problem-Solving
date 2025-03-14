class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size(), count = 0;
        vector<int> sweap(n+1, 0);
        for(auto q : queries){
            int l = q[0], r = q[1];
            sweap[l] += 1;
            sweap[r + 1] -= 1;
        }
        
        for(int i = 0; i < n; i++){
            count += sweap[i];
            if(count < nums[i]) return false;
        }
        return true;
    }
};