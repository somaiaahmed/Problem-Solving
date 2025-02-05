class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int swap=0;
        bool flag=1;
        
       map<char,int> map1;
       map<char,int>map2;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i])
            swap++;
        }
        for(int i=0;i<s1.size();i++){
            map1[s1[i]]++;
            map1[s2[i]]--;
        }
        
        for(auto c:map1){
            if(c.second!=0)
            flag=0;

        }
        return (swap==2||swap==0) && flag;
        
    }
};