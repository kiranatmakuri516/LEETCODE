class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
      map<int,int>mp;
      int i,j,k,l,m,n,p,q,r,s,t,u,v;
      n=a.size();
      vector<vector<int>>ans;
      sort(a.begin(),a.end());
      for(i=0;i<n;i++)
      {
        p=a[i][0];
        q=a[i][1];
        r=0;
        for(auto i:mp)
        {
           if(p>=i.first && p<= i.second)
           {
               u=min(p,i.first);
               v=max(i.second,q);
               mp.erase(i.first);
               mp[u]=v;
               r++;
               break;
           }
           else if(q>=i.first && q<=i.second)
           {
               u=min(p,i.first);
               v=max(i.second,q);
               mp.erase(i.first);
               mp[u]=v;
               r++;
               break;
           }
        }
        if(r==0)
            mp[p]=q;
      }
      for(auto i:mp)
      {
          vector<int>v;
          v.push_back(i.first);
          v.push_back(i.second);
          ans.push_back(v);
      }
        return ans;
    }
};