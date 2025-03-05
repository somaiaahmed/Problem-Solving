class Solution {
public:
    long long coloredCells(int n) {
        long long ans = 1, bound = 4;
        for(int i = 2; i<=n; i++){
            ans+=bound;
            bound+=4;

            // cout<<"i= "<< i << " ans = "<<ans<<endl;
        }
        return ans;
    }
};