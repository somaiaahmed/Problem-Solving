class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int,int> ban;
        for(int i=0;i<banned.size();i++){
            ban[banned[i]]=1;
        }
        
        int sum=0,i=1,count=0;
        while(sum+i<=maxSum&&i<=n){
            if(!ban[i]){
                sum+=i;
                count++;
            }
            i++;

        }
        return count;

    }
};