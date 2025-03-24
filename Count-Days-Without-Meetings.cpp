class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        
        sort(meetings.begin(), meetings.end());

        int free = 0, latest = 0;

        for(auto meeting : meetings){
            int start = meeting[0], end = meeting[1];

            if(start > latest + 1)
                free+= start - latest -1;
            latest = max(latest, end);
        }
        free+= days - latest;
        return free;
    }
};