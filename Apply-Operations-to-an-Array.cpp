class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size(), zeros = 0;
        vector<int> ans;
        for(int i = 0; i< n - 1; i++){
            if(nums[i] == nums[i+1]){
                nums[i]*=2;
                nums[i+1] = 0;
            }
        }
        for(auto x :nums){
            if(x!=0) ans.push_back(x);
        }
        while(ans.size() < n){
            ans.push_back(0);
        }
        return ans;

    }
};