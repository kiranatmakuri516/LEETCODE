class Solution {
public:
    string orderlyQueue(string s, int k) {
      int i,j,l,m,n,p,q,r,t,u,v,x,y,z;
      n=s.size();
      if(k==1)
      {
        string a="";
          a+=s;
          a+=s;
        m=a.size();
        for(i=0;i<=m-n;i++)
        {
            string b="";
            for(j=i;j<i+n;j++)
                b+=a[j];
            //cout<<b<<" ";
            s=min(s,b);
        }
          return s;
      }
      else
      {
          sort(s.begin(),s.end());
          return s;
      }
    }
};