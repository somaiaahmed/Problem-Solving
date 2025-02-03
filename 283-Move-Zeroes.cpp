class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero=0;
        for (int i =0;i<nums.size();i++){
            if(nums[i]==0)
                zero++;
        }
        nums.erase(remove(nums.begin(),nums.end(),0),nums.end());
        for (int i =0; i<zero;i++){
            nums.push_back(0);
        }
    }
};