class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for( int x: nums){
            freq[x]++;
        }
        for(auto& pair:freq){
            if(pair.second >1){
                return true;
            }
        }
        return false;
    }
};