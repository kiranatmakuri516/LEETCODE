class Solution {
public:
    vector<string> simplifiedFractions(int n) {
      int i,j,k,l,m,q;
      vector<string>v;
      map<float,int>mp;
      for(i=1;i<=n;i++)
      {
          for(j=i+1;j<=n;j++)
          {
              float p=(float)i/j;
              //cout<<p<<" ";
              if(mp[p]==0)
              {
                  mp[p]++;
                  string a,b;
                  a=to_string(i);
                  a+='/';
                  b=to_string(j);
                  a+=b;
                  v.push_back(a);
              }
          }
      }
    return v;
    }
};