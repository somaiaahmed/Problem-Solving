class Solution {
public:
    string pushDominoes(string d) {
       int n = d.size();
        vector<int> force (n);

        int f = 0;
        for(int i = 0; i< n; i++){
            if(d[i] == 'R') f = n;
            else if(d[i] == 'L') f = 0;
            else f = max(f - 1, 0);
            force[i] +=f; 
        }

        f = 0;
        for(int i = n-1; i >= 0; i--){
            if(d[i] == 'L') f = n;
            else if(d[i] == 'R') f = 0;
            else f = max(f - 1, 0);
            force[i] -=f; 
        }
        string ans;
        for(auto x : force){
            if(x == 0) ans.push_back ('.');
            else if(x > 0) ans.push_back ( 'R');
            else ans.push_back ('L');
        }
        return ans;
        
    }
};