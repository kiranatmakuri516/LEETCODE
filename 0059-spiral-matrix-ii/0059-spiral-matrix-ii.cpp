class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>>v(n,vector<int>(n,0));
      int i,j,k,l,m,p,q,r,s,t,u;
      k=0;
      m=n;
      r=m*n;
      int r1,r2,c1,c2;
      r1=0;
      r2=m-1;
      c1=0;
      c2=n-1;
      p=0;
      u=1;
      while(k<r)
      {
        if(p==0)
        {
          for(i=c1;i<=c2;i++)
          v[r1][i]=u++;
          r1++;
          p=1;
          k+=abs(c2-c1+1);
        }
        else if(p==1)
        {
          for(i=r1;i<=r2;i++)
          v[i][c2]=u++;
          c2--;
          p=2;
          k+=abs(r2-r1)+1;
        }
        else if(p==2)
        {
          for(i=c2;i>=c1;i--)
          v[r2][i]=u++;
          r2--;
          p=3;
          k+=abs(c2-c1+1);
        }
        else if(p==3)
        {
            for(i=r2;i>=r1;i--)
            v[i][c1]=u++;
            c1++;
            p=0;
            k+=abs(r2-r1+1);
        }
      }
        return v;
    }
};