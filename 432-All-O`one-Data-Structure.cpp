class AllOne {
public:
    unordered_map<string,int> map;
    set<pair<int, string>> st;
    AllOne() {
        
    }
    
    void inc(string key) {
        if(map.find(key) == map.end()){
            map[key]=1;
            st.insert({1, key});
        }
        else{
            st.erase({map[key], key});
            map[key]++;
            st.insert({map[key], key});
        }
    }
    
    void dec(string key) {
        st.erase({map[key], key});
        map[key]--;
        if(map[key])
            st.insert({map[key], key});
    }
    
    string getMaxKey() {
        return st.empty() ? \\ : st.rbegin()->second;
    }
    
    string getMinKey() {
        return st.empty() ? \\ : st.begin()->second;
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */