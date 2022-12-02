class Solution {
public:
    string removeDuplicates(string a, int k) {
     int i,j,l,m,n,p,q,u;
    n=a.size();
    char b[n+1];
    map<char,int>mp;
    map<char,int>np;
    p=0;
    for(i=0;i<n;i++)
    {
       b[p++]=a[i];
       if(p>=k)
       {
          j=p-1;
          u=0;
          while( j>=0 && b[j]==a[i])
          {
          j--;
          u++;
          }
          if(u==k)
          p=j+1;
       }
    }
        string kir="";
    for(i=0;i<p;i++)
    kir+=b[i];
        return kir;
    }
};