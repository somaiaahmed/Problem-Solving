class Solution {
public:
    string toLowerCase(string s) {
        for(auto& c: s){
            if(int(c)>=65 && int(c)<=90){
                c+=32;
            }
        }
        return s;
    }
};