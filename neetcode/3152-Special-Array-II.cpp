class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<bool> ans(queries.size(), false);
        vector<int> violate(n,0);

        for(int i=1;i<n; i++){
            if(nums[i]%2 == nums[i-1]%2){
                violate[i]= violate[i-1] + 1;
            }
        else
            violate[i]=violate[i-1];
            
        }
        for(int i = 0;i<queries.size();i++){
            vector<int> query = queries[i];
            int start = query[0];
            int end = query[1];
            ans[i] = violate[end] - violate[start] == 0;
        }
        return ans;
    }
};