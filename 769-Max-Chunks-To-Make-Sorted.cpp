class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int sum = 0, sumIdx = 0, cnt = 0;
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
            sumIdx+=i;
            cnt += sum == sumIdx;
        }
        return cnt;
    }
};