class Solution {
public:
    bool ok(int md, vector<int>& nums, vector<vector<int>>& q){
        int n = nums.size();
        vector<int> v(n+1);
        for(int i = 0; i < md; i++){
            int l = q[i][0], r = q[i][1], val = q[i][2];
            v[l]+=val;
            v[r+1]-=val;
        }
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum +=v[i];
            if(sum < nums[i]) return false;
        }
        return true;
    }

    int minZeroArray(vector<int>& nums, vector<vector<int>>& q) {
        int n = nums.size(), st = 0, ed = q.size(), cur = -1, md;
        while(st <= ed){
            md = (st+ed)/2;
            if(ok(md, nums, q)){
                cur = md;
                ed = md - 1;
            }
            else
            st = md + 1;
        }
        return cur;
    }
};