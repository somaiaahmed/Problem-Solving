class Solution {
public:
    string removeOccurrences(string s, string part) {
        // string res;
        // for(int i =0; i < s.size() - +part.length(); i++){
        //     if(!res.empty() && res.back() == part[0] && s[i+part.length() - 1]
        //      == part[part.length() - 1])
        //         res.pop_back();
        //     else{
        //         res.push_back(s[i]);
        //     }
        // }
        // return res;
        while(s.find(part) != -1){
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};