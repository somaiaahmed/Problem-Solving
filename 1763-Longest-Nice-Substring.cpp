class Solution {
public:
    string longestNiceSubstring(string s) {
    return divideAndConqure(s);
        
    }
    bool isNice(const string& s){
        unordered_set<char> chars(s.begin(),s.end());
        for(auto c: chars){
            if(chars.find(toupper(c))== chars.end()||chars.find(tolower(c))== chars.end())
            return false;
        }
        return true;
    }

    string divideAndConqure(const string& s){
        if (s.size() < 2){
            return "";
        }
        for(int i=0; i <s.size();i++){
            if(s.find(toupper(s[i])) == string::npos || s.find(tolower(s[i])) == string::npos){
                string left = divideAndConqure(s.substr(0,i));
                string right = divideAndConqure(s.substr(i+1));
                return left.size() >= right.size() ? left : right; 
            }
        }
        return s;
    }
};