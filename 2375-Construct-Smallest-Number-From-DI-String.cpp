class Solution {
public:
    string smallestNumber(string pattern) {
        string ans, stk;
        int idx = 0;
        for(char c = '1'; c <= '9'; c++){
            stk.push_back(c);
            if(pattern[idx] == 'I' || idx == pattern.size()){
                while(stk.size()){
                    ans.push_back(stk.back());
                    stk.pop_back();
                }
            } 
            idx++;
        }
        
        return ans;
    }
};