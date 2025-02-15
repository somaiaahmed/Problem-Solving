class Solution {
public:
    
    vector<int> lexicalOrder(int n) {
        vector<int> v;
        int x = 1;
        while(v.size() < n){
            v.push_back(x);
            if(x*10 <= n){
                x*=10;
            }
            else{
                while(x == n || x%10 == 9) x/=10;
                x++;
            }
        }
        return v;
    }
};