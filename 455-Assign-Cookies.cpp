class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int contentChild=0;
        int cookieIndex=0;
        int n = min(s.size(), g.size());
        
        while(cookieIndex<s.size() && contentChild<g.size()){
            if(s[cookieIndex]>= g[contentChild]){
                contentChild++;

            }
            cookieIndex++;
        }
        return contentChild;
    }
};