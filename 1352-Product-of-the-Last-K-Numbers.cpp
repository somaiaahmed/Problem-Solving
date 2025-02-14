class ProductOfNumbers {
public:
    vector<int> zeroes {0}, v{1};
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if(!num){
            v.push_back(1);
            zeroes.push_back(zeroes.back()+1);
        }
        else{
            v.push_back(num * v.back());
            zeroes.push_back(zeroes.back());
        }
        
    }
    
    int getProduct(int k) {
        int r = v.size() -1, l = r - k;
        if(zeroes[r] - zeroes[l]) return 0;
        return v[r] / v[l];

        
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */