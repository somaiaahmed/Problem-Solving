class Solution {
public:
    bool ok(long long t, vector<int>& ranks, int cars){
        for(auto r : ranks){
            // r* n*n = t
            // n =  sqrt(t/r)
            //  cars - n <= 0
            cars -= floor(sqrt(t/r));
            if(cars <= 0) return true;
        }
        return false;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        long long st = 1, ed = 1e14, cur = -1, md;
        while(st <= ed){
            md = (st+ed)/2;
            if(ok(md, ranks, cars)){
                cur = md;
                ed = md - 1; 
            }
            else
                st = md + 1;
        }
        return cur;
    }
};