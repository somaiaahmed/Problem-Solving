class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> arr(100001);
        for(auto x : nums){
            arr[x + 50000]++;
        }
        vector<int> ans;
        for(int i =0 ;i<100001;i++){
            while(arr[i]--)
            ans.push_back(i-50000);
        }
        return ans;
    }
};