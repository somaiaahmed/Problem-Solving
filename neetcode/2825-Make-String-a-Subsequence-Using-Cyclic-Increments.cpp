class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {

        int i=0,j=0;
        while(i<str1.size()&& j<str2.size()){
            char x= (str1[i] == 'z' )? 'a' : str1[i]++;

            if(str1[i]==str2[j]|| x == str2[j]){
                j++;
            }
            i++;
        }

        return j==str2.size();


        return j==str2.size();
        
    }
};