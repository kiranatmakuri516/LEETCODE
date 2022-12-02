class Solution {
public:
    int compress(vector<char>& a) {
     int i,j,k,l,m,n,p,q,r,s,t,u;
     vector<char>v;
     p=1;
     n=a.size();
     for(i=0;i<n;i++)
     {
         char b=a[i];
       while(i+1<n && a[i]==a[i+1])
       {
           p++;
           i++;
       }
       v.push_back(b);
       if(p!=1)
       {
           string c=to_string(p);
           for(j=0;j<c.size();j++)
               v.push_back(c[j]);
       }
         p=1;
     }
      k=v.size();
      for(i=0;i<k;i++)
          a[i]=v[i];
        return k;
    }
};