class Solution {
public:
    void fun(set<string>&ans,string a,int i,int n)
    {
        if(i==n)
        {
            ans.insert(a);
            return ;
        }
        string b=a;
        fun(ans,a,i+1,n);
        if(b[i]<='Z' && b[i]>='A')
            b[i]=b[i]+32;
        else if(b[i]<='z' && b[i]>='a')
            b[i]=b[i]-32;
        fun(ans,b,i+1,n);
    }
    vector<string> letterCasePermutation(string s) {
      set<string>ans;
      int i=0,n;
       n=s.size();
       fun(ans,s,i,n);
    vector<string>kir;
        for(auto i:ans)
            kir.push_back(i);
        return kir;
    }
};