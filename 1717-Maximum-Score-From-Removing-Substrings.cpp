class Solution {
public:

    int solve(string &s, string remove, int val){
        string newS ="";
        int res = 0;
        for(int i = 0; i < s.size(); i++){
            if(!newS.empty() && newS.back() == remove[0] && s[i] == remove[1]){
                newS.pop_back();
                res+= val;
            }
            else{
                newS.push_back(s[i]);
            }
        }
        s = newS;
        return res;
    }
    int maximumGain(string s, int x, int y) {
        stack<int> stack;
        int res = 0;
        string high = x > y ? "ab" : "ba";
        string low = high == "ab" ? "ba" : "ab";
        if(x > y){
            res += solve(s, "ab", x);
            res += solve(s, "ba", y);
        }
        else{
            res += solve(s, "ba", y);
            res += solve(s, "ab", x);
        }
        return res;
        
    }
};