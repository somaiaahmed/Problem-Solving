class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n = gifts.size();
        // reverse(gifts.begin(), gifts.end());
        for(int i=0;i< k ;i++){
            sort(gifts.begin(), gifts.end());

            gifts[n-1]= sqrt(gifts[n-1]);
        }
        long long res=0;
        for(int i =0;i< n;i++){
            res+= gifts[i];
        }
        return res;
    }
};