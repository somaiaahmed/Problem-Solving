class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size();
        int n = box[0].size();

        // transpose
        vector<vector<char>> rotated (n, vector<char>(m));
        for (int i =0 ;i< box[0].size();i++){
            for(int j=0;j<box.size();j++){
                rotated[i][j]=box[j][i];
            }
        }

        // reverse each row
        for (int i =0;i<n;i++){
            reverse(rotated[i].begin(),rotated[i].end());
        }

        // apply gravity
        // each column
        for (int j=0;j<m;j++){
            for(int i=n-1;i>=0;i--){
                if(rotated[i][j]=='.'){
                    int nextRowWithStone = -1;
                    for(int k=i-1;k>=0;k--){
                        if(rotated[k][j]=='*')
                        break;
                        if(rotated[k][j]=='#'){
                            nextRowWithStone=k;
                            break;
                        }

                    }
                    if(nextRowWithStone !=-1){
                        rotated[nextRowWithStone][j]='.';
                        rotated[i][j]='#';
                    }

                }
            }
        }


        return rotated;
    }
};