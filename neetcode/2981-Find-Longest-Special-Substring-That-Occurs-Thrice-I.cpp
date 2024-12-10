class Solution {
public:
    int maximumLength(string s) {
        map<pair<char,int>,int> count;
        int subLength = 0;
        for(int i =0; i<s.length(); i++){
            char c = s[i];
            subLength = 0;
            for(int j = i; j< s.length(); j++){

                if(c == s[j]){
                    subLength++;
                    count[{c, subLength}]++;
                }
                else
                    break;
            }
        }
        int ans = 0;
        for(auto i: count){
            int len = i.first.second;
            if(i.second >=3 && len >ans)
                ans = len;
        }
        if (ans == 0)
            return -1;
        return ans;
    }
};