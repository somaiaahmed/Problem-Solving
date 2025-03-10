class Solution {
public:
    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u'; 
    }

    long long solve(string s, int k){
        unordered_map<char, int> mp;
        long long ans = 0;
        int n = s.size(), cons = 0, l = 0;
        for(int r = 0; r < n; r++){
            isVowel(s[r]) ? mp[s[r]]++ : cons++;
            while(mp.size() == 5 && cons >= k){
                ans += n-r;
                isVowel(s[l]) ? mp[s[l]]-- : cons--;
                if(mp[s[l]] == 0) mp.erase(s[l]);
                l++;
            }
        }
        return ans;
    }
    long long countOfSubstrings(string word, int k) {
        return solve(word, k) - solve(word, k+1);
    }
};