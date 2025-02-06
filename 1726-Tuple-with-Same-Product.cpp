class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int> freq;
        int sum= 0;
        for(int i =0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(i!=j){
                    freq[nums[i]*nums[j]]++;
                }
            }
        }
        for(auto [val,frqq]: freq){
            int pairEqual = (frqq-1) * frqq / 2;
            sum += 8 * pairEqual;

        }
        return sum;
    }
};