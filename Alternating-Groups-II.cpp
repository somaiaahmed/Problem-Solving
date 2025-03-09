class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size(), ans = 0, cnt = 1;

        for(int i = 1; i < n+k-1; i++){
            if(colors[i%n] != colors[(i-1)%n]) cnt++;
            else cnt = 1;
            ans+=(cnt>=k);
        }
        return ans;
    }
};