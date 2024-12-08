class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());
        vector<vector<int>> dp(events.size(), vector<int>(3, -1));
        return findEvents(events, 0, 0, dp);
        
    }

    int findEvents(vector<vector<int>>& events, int index, int count,
                  vector<vector<int>>& dp){
        if(count == 2 || index >= events.size())
            return 0;
        
        if(dp[index][count] == -1){
            int end = events[index][1];
            int l = index + 1, h = events.size() - 1;

            while(l<h){
                int mid = l + ((h - l) >> 1) ;
                if(events[mid][0] > end)
                    h=mid;
                else
                    l =mid + 1;
            }
            int include = events[index][2] + (l < events.size() && events[l][0] > end 
                                                ? findEvents(events, l, count+1, dp) 
                                                :0 );
            int exclude = findEvents(events, index+1, count, dp);
            dp[index][count] = max(include, exclude);
        }
        return dp[index][count];


    }
};