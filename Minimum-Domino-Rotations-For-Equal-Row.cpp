class Solution {
public:
    int check(int x, vector<int>& tops, vector<int>& bottoms){
        int fixTop = 0, fixBottom = 0;

        for(int i = 0; i < tops.size(); i++){
            if(tops[i] != x && bottoms[i] != x){
                return -1;
            }
            if(tops[i] != x) fixTop++;
            if(bottoms[i] != x) fixBottom++;
        }
            
        return min(fixTop, fixBottom);
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {

       int res = check(tops[0], tops, bottoms);
       if(res != -1) return res;
       return check(bottoms[0], tops, bottoms);

            
    }
};