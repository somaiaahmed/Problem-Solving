class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {

        int index=1;
        istringstream iss(sentence);
        string word;
        while(iss>> word){
           
            if(word.find(searchWord)==0)
            return index;

            index ++;
        }
        return -1;

        
    }
};