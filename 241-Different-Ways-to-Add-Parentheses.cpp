class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int> v;
        for(int i = 0; i < expression.size(); i++){
            char op = expression[i];
            if(op == '+' || op == '-' || op == '*'){
                vector<int> left = diffWaysToCompute(expression.substr(0,i));
                vector<int> rigth = diffWaysToCompute(expression.substr(i+1));
                for(int l :left)
                    for(int r : rigth)
                        if(op == '+') v.push_back(l+r);
                        else if(op == '-') v.push_back(l-r);
                        else v.push_back(l*r);
            }
        }
        if(v.empty())
            v.push_back(stoi(expression));
        
        return v;
    }
};