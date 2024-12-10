class Solution {
public:
    string longestNiceSubstring(string s) {
    if (s.size() < 2){
            return "";
        }
        for(int i=0; i <s.size();i++){
            if(s.find(toupper(s[i])) == string::npos || s.find(tolower(s[i])) == string::npos){
                
                // Split and recurse on left and right substrings
                string left = longestNiceSubstring(s.substr(0,i));
                string right = longestNiceSubstring(s.substr(i+1));
                
                // Return the longer substring, or left one if they are equal
                return left.size() >= right.size() ? left : right; 
            }
        }

        // If the loop completes, the entire string is nice
        return s;
    }
    
        
};