class ProductOfNumbers {
public:
    vector<int> v;
    ProductOfNumbers() {
    }
    void add(int num) {
        if(num==0)v.clear();
        else if(v.size()==0){
            v.push_back(num);
        }
        else{
            v.push_back(num*v.back());
        }
    }
    int getProduct(int k) {
        if(k>v.size())return 0;
        return (v.size()-k>0)?v.back()/v[v.size()-k-1]:v.back();
    }
};
