class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int>small, great;
        vector<int> ans;
        ans.reserve(n);
        int cpivot = 0;
        for(auto x : nums){
            if(x<pivot) small.push_back(x);
            else if(x>pivot) great.push_back(x);
            else cpivot++;
        }
        
        ans.insert(ans.end(), small.begin(), small.end());
        ans.insert(ans.end(), cpivot, pivot);
        ans.insert(ans.end(), great.begin(), great.end());
        return ans;
    }
};