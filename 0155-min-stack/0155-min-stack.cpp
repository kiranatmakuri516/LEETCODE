class MinStack {
public:
    stack<int>s;
    map<int,int>mp;
    MinStack() {
        
    }
    
    void push(int val) {
        mp[val]++;
      s.push(val);  
    }
    
    void pop() {
      int k=s.top(); 
      s.pop(); 
      mp[k]--;
      if(mp[k]==0)
          mp.erase(k);
    }
    
    int top() {
      return s.top();  
    }
    
    int getMin() {
       auto kir=mp.begin();
        return kir->first;
        return 1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */