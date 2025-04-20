class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> mp;
        for(auto x : answers){
            mp[x]++;
        }
        int ans = 0;
        for(auto pair: mp){
            ans+= ceil((double)pair.second / (pair.first + 1)) * (pair.first + 1); 
            cout<<pair.first<< " "<<pair.second<<endl;
        }
        return ans;
    }
};