class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<int> idx(n);
        stack<int> stk;
        iota(idx.begin(), idx.end(), 0);
        sort(idx.begin(), idx.end(), [&](int a, int b){
            return positions[a] < positions[b];
        });

        for(auto i : idx){
            if(directions[i] == 'R'){
                stk.push(i);
            }
            else{
                while(stk.size() && healths[i]){
                    int j = stk.top();
                    if(healths[j] > healths[i]){
                        healths[i] = 0;
                        healths[j]--;
                    }
                    else if(healths[j] < healths[i]){
                        healths[j] = 0;
                        healths[i]--;
                        stk.pop();
                    }
                    else{
                        healths[i] = healths[j] = 0;
                        stk.pop();
                    }
                }
            }
        }
        vector<int> ans;
        for(auto c : healths){
            if(c)
                ans.push_back(c);
        }
        return ans;
    }
};