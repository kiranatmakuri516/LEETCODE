class Solution {
public:
    int maxArea(vector<int>& a) {
      int i,j,k,l,m,n,p,q,r,s,t,u,v,x;
      n=a.size();
      l=0;
      r=n-1;
      u=v=x=0;
      while(l<=r)
      {
        p=a[l];
        q=a[r];
        v=(r-l)*min(p,q);
        if(u<v)
        u=v;
        if(p<q)
        l++;
        else
        r--;
      }
      return u;
    }
};