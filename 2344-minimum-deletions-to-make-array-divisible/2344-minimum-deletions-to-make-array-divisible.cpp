class Solution {
public:
    int minOperations(vector<int>& a, vector<int>& b) {
      int i,j,k,l,m,n,p,q,r,s,t,u,v;
      m=a.size();
      n=b.size();
      k=0;
      map<int,int>mp;
      for(i=0;i<n;i++)
       k=gcd(k,b[i]);
      for(i=0;i<m;i++)
       mp[a[i]]++;
      p=0;
      q=m;
      for(auto i:mp)
      {
         u=i.first;
         if(k%u==0)
         {
           if(p<q)
               q=p;
         }
          p+=i.second;
      }
      if(q==m)
          return -1;
        return q;
    }
};