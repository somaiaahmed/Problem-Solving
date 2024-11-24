class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int minVal = INT_MAX;
        int negativeCount = 0;
        for (auto& row : matrix){
            for(int val:row){
                sum+=abs(val);
                if(val<0){
                    negativeCount++;
                }
                minVal = min(minVal,abs(val)); 
            }

        }
        if(negativeCount % 2 != 0){
            sum -=2*minVal;
        }

        return sum;
    }
};