class Solution {
public:
    bool ok(int md, vector<int>& candies, long long k){
        long long cnt = 0;
        for(auto x : candies){
            cnt+= x/md;
        }
        return cnt >= k;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int st = 1, ed = 1e7, cur = 0, md;
        while(st <= ed){
            md = (st+ed) / 2;
            if(ok(md, candies, k)){
                cur = md;
                st = md+1;
            }
            else{
                ed = md - 1;
            }
        }
        return cur;
    }
};