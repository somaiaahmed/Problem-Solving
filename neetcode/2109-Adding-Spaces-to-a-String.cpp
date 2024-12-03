class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res;
        int index=0;
        for(int i=0;i<s.size();i++){
            if(index<spaces.size()&& spaces[index]==i){
                res.push_back(' ');
                index++;
            }
            res.push_back(s[i]);
        }
        return res;
        
    }
};