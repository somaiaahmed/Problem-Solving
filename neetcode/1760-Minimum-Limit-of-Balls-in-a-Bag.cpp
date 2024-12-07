class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int l=1,r=0;

        for(auto num:nums){
            r=max(r,num);
        }

        while(l<r){
            int mid= (l+r)/2;

            if(isPossible(mid,nums,maxOperations)){
                r=mid;
            }
            else
            l=mid+1;
        }
        return l;
    }


private:
bool isPossible(int maxBalls, vector<int>& nums, int maxOp){
    int count=0;

    for( int num: nums){
        int op = ceil(num / (double)maxBalls)-1;
        count += op;

        if(count > maxOp)
        return false;
    }
    return true;
}
};