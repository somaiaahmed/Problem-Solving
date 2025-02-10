class Solution {
public:
    string makeFancyString(string s) {
        string res;
        res.push_back(s[0]);
        for(int i = 1; i < s.size() - 1; i++){
            if(s[i-1] == s[i] && s[i] == s[i+1]){
                // s.erase(i, 1);
                // i -= 1;
            }
            else{
                res.push_back(s[i]);
            }
        }
         if(s.size() > 1)
            res.push_back(s[s.size()-1]);
        return res;
        
    }
};