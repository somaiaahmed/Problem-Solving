class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        vector<int> pre = arr, suf = arr;

        for(int i = 1; i < pre.size(); i++){
            pre[i] = max(pre[i], pre[i - 1]);
        }
        for(int i = suf.size() - 2; i >= 0; i--){
            suf[i] = min(suf[i], suf[i + 1]); 
        }
        int cnt = 0;
        for(int i = 0; i < n - 1; i++){
            if(pre[i] < suf[i + 1])
                cnt++;
        }
        return cnt+1;
    }
};