class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int st = 1, end = 10e5, cur = -1, md;

        while(st <= end){
            md = st+end >>1;
            int stores = 0;
            for(auto c : quantities){
                stores += (c+md-1)/md;
            }
            if(stores <= n){
                cur = md;
                end = md - 1;
            }
            else{
                st = md+1;
            }
        }
        return cur;
    }
};