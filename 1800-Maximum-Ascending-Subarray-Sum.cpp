class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=nums[0];
        vector<int>maxSum;
        maxSum.push_back(sum);
        for(int i =1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                sum+=nums[i];
            }
            else{
                maxSum.push_back(sum);
                sum=nums[i];

            }
        }
        maxSum.push_back(sum);

        sort(maxSum.rbegin(),maxSum.rend());
        return maxSum[0];
    }
};