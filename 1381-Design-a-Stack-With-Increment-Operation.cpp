class CustomStack {
public:
    vector<int> stk;
    int maxSize;
    CustomStack(int maxSize) {
        this -> maxSize = maxSize;
    }
    
    void push(int x) {
        if(stk.size()<maxSize)
            stk.push_back(x);
    }
    
    int pop() {
        if(!stk.empty()){
            int x= stk.back();
            stk.pop_back();
            return x;
        }
        return  -1 ;
        
    }
    
    void increment(int k, int val) {
        if(stk.size() < k){
            for(auto& it : stk)
                it+= val;
        }
        else{
            for(int i = 0; i<k; i++){
                stk[i]+=val;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */