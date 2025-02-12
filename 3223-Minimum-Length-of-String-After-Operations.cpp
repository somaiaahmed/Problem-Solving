class Solution {
public:
    int minimumLength(string s) {
        int sum = 0;
        unordered_map<char,int> map;
        for(auto c: s){
            map[c]++;
        }
        for(auto pair:map){
            while(pair.second >2)
                pair.second -=2;
            sum+=pair.second;
        }
        return sum;
        
    }
};