class StockSpanner {
public:
    vector<int>v;
    StockSpanner() {
       ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0); 
    }
    
    int next(int price) {
       int l=0,k=v.size()-1;
       while(k>=0 && v[k]<=price) {l++; k--;}
        v.emplace_back(price);
        return l+1;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */