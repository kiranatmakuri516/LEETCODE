class Solution {
public:
    string removeDuplicates(string s) {
     long int i,j,k,l,m,n,p;
      n=s.size();
       char a[n+1]; 
      string b="";
      p=0;
      for(i=0;i<n;i++)
      {
          if(p==0)
          {
              a[p++]=s[i];
          }
          else if(a[p-1]==s[i])
          {
              p--;
          }
          else
              a[p++]=s[i];
      }
      for(i=0;i<p;i++)
          b+=a[i];
     return b;
    }
};