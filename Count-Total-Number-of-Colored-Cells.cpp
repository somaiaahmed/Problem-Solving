class Solution {
public:
    long long coloredCells(int n) {
        long long ans = 1, bound = 4;
        if(n==1)return 1;
        n--;
        // for(int i = 2; i<=n; i++){
        //     ans+=bound;
        //     bound+=4;

        //     // cout<<"i= "<< i << " ans = "<<ans<<endl;
        // }
        return 1LL*2*n*(n+1)+1;
    }
};