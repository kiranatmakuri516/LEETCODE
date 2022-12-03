class Solution {
public:
    vector<string> generateParenthesis(int n) {
      int i,j,k,l,m,p,q,r,t;
      string a="";
      for(i=0;i<n;i++)
          a+='(';
      for(i=0;i<n;i++)
          a+=')';
      n=2*n;
        p=0;
        vector<string>v;
        v.push_back(a);
      while(next_permutation(a.begin(),a.end()))
      {
          stack<char>s;
          for(i=0;i<n;i++)
          {
              if(a[i]=='(')
                  s.push('(');
              else 
              {
                  if(s.size())
                  {
                      if(s.top()=='(')
                          s.pop();
                  }
                  else
                  {
                      s.push('(');
                  }
              }
          }
          if(s.size()==0)
          v.push_back(a);   
      }
        return v;
    }
};