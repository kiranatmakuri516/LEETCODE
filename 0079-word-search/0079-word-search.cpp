class Solution {
public:
    void fun(vector<vector<char>>& a,string b,int m,int n,int l,int i,int j,int p,int &flag,string c)
    {
        if(p==l)
        {
            flag=1;
            return ;
        }
        if(a[i][j]!=b[p])
            return ;
        else if(flag==0)
        {
            char x=a[i][j];
            a[i][j]='@';
            if(i+1<m && flag==0)
            {
                fun(a,b,m,n,l,i+1,j,p+1,flag,c+b[p]);
            }
            if(i-1>=0 &&  flag==0)
            {
                fun(a,b,m,n,l,i-1,j,p+1,flag,c+b[p]);
            }
            if(j+1<n && flag==0)
            {
                fun(a,b,m,n,l,i,j+1,p+1,flag,c+b[p]);
            }
            if(j-1>=0 && flag==0)
            {
                fun(a,b,m,n,l,i,j-1,p+1,flag,c+b[p]);
            }
            a[i][j]=x;
            
        }
        
    }
    bool exist(vector<vector<char>>& a, string b) {
      int flag=0,m,n,l,i,j;
      m=a.size();
      n=a[0].size();
      l=b.size();
        if(m==1 && n==1 && l==1 &&a[0][0]==b[0])
            return 1;
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              string c="";
              if(a[i][j]==b[0])
              fun(a,b,m,n,l,i,j,0,flag,c);
               if(flag==1)
               return 1;
          }
      }
        return 0;
    }
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
};