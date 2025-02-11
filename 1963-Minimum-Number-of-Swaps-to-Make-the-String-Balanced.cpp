class Solution {
public:
    int minSwaps(string s) {
        int stack = 0;
        int unbalanced = 0;
        for(auto c : s){
            if(c == '[')
                stack ++;
            else{
                if(stack)
                    stack--;
                else
                    unbalanced++;
            }
        }
        return (unbalanced + 1) / 2;
    }
};