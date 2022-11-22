class Solution {
public:
    bool isStrictlyPalindromic(int n) {
      int i,j,k,l,m,p,q;
      for(i=2;i<=n-2;i++)
      {
          string a="",b="";
          k=n;
          while(k)
          {
              p=k%i;
              p=p+48;
              a+=(char)p;
              b=(char)p+b;
              k=k/i;
          }
          //cout<<a<<" "<<b<<endl;
          if(a!=b)
              return 0;
      }
        return 1;
    }
};